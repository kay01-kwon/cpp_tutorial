cmake_minimum_required(VERSION 3.10)
project(classes)
set(CMAKE_CXX_STANDARD 14)

include_directories(
    include
)

add_executable(main_sales_data
    src/main.cpp
    include/sales_data.cpp
)

target_link_libraries(main_sales_data)