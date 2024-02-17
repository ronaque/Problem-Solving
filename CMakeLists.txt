cmake_minimum_required(VERSION 3.26)
project(ProblemSolving)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProblemSolving main.cpp
        CSES/WeirdAlgorithm.cpp
        HackerRank/InputAndOutput.cpp
        CSES/MissingNumber.cpp
        CSES/Repetitions.cpp
        CSES/IncreasingArray.cpp
        "HackerRank/Project Euler/1.cpp"
        CSES/Permutations.cpp
        "CSES/NumberSpiral .cpp"
        "HackerRank/Project Euler/2.cpp"
        "HackerRank/Project Euler/3.cpp"
        "Geeks4Geeks/Reverse squared sum.cpp"
        "Geeks4Geeks/Max Min.cpp"
        "Geeks4Geeks/Peak element.cpp"
        "LeetCode/Merge Sorted Array.cpp"
)
