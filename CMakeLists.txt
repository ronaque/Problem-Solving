cmake_minimum_required(VERSION 3.26)
project(ProblemSolving)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProblemSolving main.cpp
        CSES/WeirdAlgorithm.cpp
        HackerRank/InputAndOutput.cpp
        CSES/MissingNumber.cpp
        CSES/Repetitions.cpp
        CSES/IncreasingArray.cpp)
