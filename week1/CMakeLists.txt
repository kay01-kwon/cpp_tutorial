cmake_minimum_required(VERSION 3.10)

project(week1)

include_directories(
    include
)

add_executable(
    hello_world
    src/hello_world.cpp
)

target_link_libraries(hello_world)


add_executable(
    person_main
    include/person.cpp
    src/person_main.cpp
)

target_link_libraries(
    person_main
)