cmake_minimum_required(VERSION 3.10)

project(Progression)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    include
)


add_executable(main
    src/main.cpp
    include/progression.cpp
    include/arithmetic_progression.cpp
    include/geometric_progression.cpp
    include/fibonacci_progression.cpp
)