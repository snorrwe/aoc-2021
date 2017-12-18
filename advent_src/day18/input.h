#pragma once
#include <array>

namespace Day18
{
const auto TEST_INPUT =
    std::array<std::string, 10>{{"set a 1", "add a 2", "mul a a", "mod a 5", "snd a", "set a 0",
                                 "rcv a", "jgz a -1", "set a 1", "jgz a -2"}};
const auto TEST_INPUT2 =
    std::array<std::string, 7>{{"snd 1", "snd 2", "snd p", "rcv a", "rcv b", "rcv c", "rcv d"}};
}
