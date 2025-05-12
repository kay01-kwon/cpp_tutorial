cmake_minimum_required(VERSION 3.10)

project(oop_person)

set(CMAKE_CXX_STANDARD 14)

include_directories(
    include
)

add_executable(
    main
    src/main.cpp
    include/person.cpp
    include/student.cpp
)
