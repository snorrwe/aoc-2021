from copy import deepcopy

PROGRAM = [
    1, 0, 0, 3, 1, 1, 2, 3, 1, 3, 4, 3, 1, 5, 0, 3, 2, 1, 13, 19, 1, 10, 19,
    23, 2, 9, 23, 27, 1, 6, 27, 31, 1, 10, 31, 35, 1, 35, 10, 39, 1, 9, 39, 43,
    1, 6, 43, 47, 1, 10, 47, 51, 1, 6, 51, 55, 2, 13, 55, 59, 1, 6, 59, 63, 1,
    10, 63, 67, 2, 67, 9, 71, 1, 71, 5, 75, 1, 13, 75, 79, 2, 79, 13, 83, 1,
    83, 9, 87, 2, 10, 87, 91, 2, 91, 6, 95, 2, 13, 95, 99, 1, 10, 99, 103, 2,
    9, 103, 107, 1, 107, 5, 111, 2, 9, 111, 115, 1, 5, 115, 119, 1, 9, 119,
    123, 2, 123, 6, 127, 1, 5, 127, 131, 1, 10, 131, 135, 1, 135, 6, 139, 1,
    139, 5, 143, 1, 143, 9, 147, 1, 5, 147, 151, 1, 151, 13, 155, 1, 5, 155,
    159, 1, 2, 159, 163, 1, 163, 6, 0, 99, 2, 0, 14, 0
]


def part1():
    program = deepcopy(PROGRAM)

    program[1] = 12
    program[2] = 2
    for i, op in enumerate(program[::4]):
        operation = {
            1: lambda x, y: program[x] + program[y],
            2: lambda x, y: program[x] * program[y],
            99: None
        }[op]

        if operation is None:
            break

        i *= 4
        program[program[i + 3]] = operation(program[i + 1], program[i + 2])

    return program[0]


def execute(in1, in2):
    program = deepcopy(PROGRAM)
    memory = deepcopy(PROGRAM)
    memory[1] = in1
    memory[2] = in2
    for i, op in enumerate(program[::4]):
        operation = {
            1: lambda x, y: memory[x] + memory[y],
            2: lambda x, y: memory[x] * memory[y],
            99: None
        }[op]

        if operation is None:
            break

        i *= 4
        res = operation(program[i + 1], program[i + 2])
        memory[program[i + 3]] = res
    return memory[0]


def part2():
    program = deepcopy(PROGRAM)
    memory = deepcopy(PROGRAM)

    for x in range(100):
        for y in range(100):
            output = execute(x, y)
            if output == 19690720:
                return 100 * x + y
    assert 0


print(part1())
print(part2())
