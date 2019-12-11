#![feature(test)]
extern crate test;

use std::ops::{Add, Div, Mul, Sub};

#[derive(Debug, Clone, Copy, Hash, Eq, PartialEq)]
pub struct Point {
    pub x: i32,
    pub y: i32,
}
impl Point {
    pub fn squared_dist(&self, other: &Self) -> i32 {
        let x = self.x - other.x;
        let y = self.y - other.y;
        x * x + y * y
    }

    pub fn len(&self) -> f32 {
        let x = self.x as f32;
        let y = self.y as f32;

        (x * x + y * y).sqrt()
    }

    pub fn dot(&self, other: &Self) -> i32 {
        self.x * other.x + self.y * other.y
    }
}

impl Add for Point {
    type Output = Point;
    fn add(self, other: Point) -> Point {
        Point {
            x: self.x + other.x,
            y: self.y + other.y,
        }
    }
}
impl Sub for Point {
    type Output = Point;
    fn sub(self, other: Point) -> Point {
        Point {
            x: self.x - other.x,
            y: self.y - other.y,
        }
    }
}
impl Div<i32> for Point {
    type Output = Point;
    fn div(self, other: i32) -> Point {
        Point {
            x: self.x / other,
            y: self.y / other,
        }
    }
}
impl Mul<i32> for Point {
    type Output = Point;
    fn mul(self, other: i32) -> Point {
        Point {
            x: self.x * other,
            y: self.y * other,
        }
    }
}

/// Compute AB segment and C point distance squared
fn sq_dist_segment_point(a: Point, b: Point, c: Point) -> i32 {
    let ab = b - a;
    let ac = c - a;
    let bc = c - b;
    let e = ac.dot(&ab);
    if e < 0 {
        return ac.dot(&ac);
    };
    let f = ab.dot(&ab);
    if e >= f {
        return bc.dot(&bc);
    }
    ac.dot(&ac) - e * e / f
}

fn part1(asteriods: &Vec<Point>) -> (Point, usize) {
    asteriods
        .iter()
        .map(|a| {
            let visible = asteriods
                .iter()
                .filter(|b| {
                    for c in asteriods.iter().filter(|c| *a != **c && b != c) {
                        if sq_dist_segment_point(*a, **b, *c) == 0 {
                            return false;
                        }
                    }
                    true
                })
                .count();
            (*a, visible - 1)
        })
        .max_by_key(|(_, i)| *i)
        .unwrap()
}

fn part2(pos: Point, mut asteriods: Vec<Point>, n: usize) -> Point {
    let first = asteriods
        .iter()
        .cloned()
        .enumerate()
        .filter(|(_, c)| c.x == pos.x && pos.y > c.y)
        .min_by_key(|(_, c)| pos.squared_dist(c))
        .unwrap();
    asteriods.swap(0, first.0);
    let mut line = (pos, first.1);
    let mut count = 1;
    loop {
        asteriods[count..].sort_unstable_by_key(|x| {
            // sort by the angle from line
            let (a, b) = line;
            let ab = b - a;
            let len = ab.len();
            let x = *x - a;
            let mut t1 = x.dot(&ab) as f32;
            t1 /= len * x.len();
            (t1.acos() * 100_000.0) as i32
        });
        let (i, c) = asteriods[count..]
            .iter()
            .cloned()
            .enumerate()
            .find(|(_, c)| {
                let (a, b) = line;
                // is C clockwise from AB?
                let orient = (a.x - c.x) * -(b.y - c.y) + (a.y - c.y) * (b.x - c.x);
                // and is the angle acute?
                orient < 0
            })
            .expect("wtf");
        asteriods.swap(count, i + count);
        count += 1;
        line = (pos, c);
        if count == n {
            return c;
        }
    }
}

fn parse(input: &str) -> Vec<Point> {
    let points = input
        .split('\n')
        .enumerate()
        .map(|(y, line)| {
            let mut asteriods = Vec::with_capacity(line.len());
            for (x, c) in line.chars().enumerate() {
                if c == '#' {
                    asteriods.push(Point {
                        x: x as i32,
                        y: y as i32,
                    });
                }
            }
            asteriods
        })
        .flatten()
        .collect();

    points
}

fn main() {
    let input = std::fs::read_to_string("input.txt").unwrap();
    let map = parse(&input);

    let p1 = part1(&map);
    println!("{:?}", p1);

    let p2 = part2(p1.0, map, 200);
    println!("{:?}", p2);
}

#[cfg(test)]
mod tests {
    use super::*;
    use test::Bencher;

    #[test]
    fn part1_simple() {
        let input = ".#..#\n.....\n#####\n....#\n...##\n";

        let map = parse(input);

        let res = part1(&map);

        println!("{:?}", res);

        assert_eq!(res.0, Point { x: 3, y: 4 });
        assert_eq!(res.1, 8);
    }

    #[test]
    fn part1_simple_2() {
        let input = "......#.#.\n#..#.#....\n..#######.\n.#.#.###..\n.#..#.....\n..#....#.#\n#..#....#.\n.##.#..###\n##...#..#.\n.#....####\n";

        let map = parse(input);

        let res = part1(&map);

        println!("{:?}", res);

        assert_eq!(res.0, Point { x: 5, y: 8 });
        assert_eq!(res.1, 33);
    }

    #[test]
    fn part2_simple() {
        let input = ".#..##.###...#######\n##.############..##.\n.#.######.########.#\n.###.#######.####.#.\n#####.##.#.##.###.##\n..#####..#.#########\n####################\n#.####....###.#.#.##\n##.#################\n#####.##.###..####..\n..######..##.#######\n####.##.####...##..#\n.#####..#.######.###\n##...#.##########...\n#.##########.#######\n.####.#.###.###.#.##\n....##.##.###..#####\n.#.#.###########.###\n#.#.#.#####.####.###\n###.##.####.##.#..##";

        let map = parse(input);

        let res = part2(Point { x: 11, y: 13 }, map, 200);

        println!("{:?}", res);

        assert_eq!(res, Point { x: 8, y: 2 });
    }

    #[bench]
    fn bench_part2(b: &mut Bencher) {
        let input = std::fs::read_to_string("input.txt").unwrap();
        let map = parse(&input);
        let p = part1(&map);
        b.iter(|| part2(p.0, map.clone(), 200));
    }

    #[bench]
    fn bench_part1(b: &mut Bencher) {
        let input = std::fs::read_to_string("input.txt").unwrap();
        let map = parse(&input);
        b.iter(|| part1(&map));
    }
}
