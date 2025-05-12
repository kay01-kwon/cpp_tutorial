cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)

include_directories(
    include
)

add_executable(
    shallow_copy_example
    src/shallow_copy_example.cpp
    include/class_record_shallow_cpy.cpp
)

add_executable(
    deep_copy_example
    src/deep_copy_example.cpp
    include/class_record_deep_cpy.cpp
)