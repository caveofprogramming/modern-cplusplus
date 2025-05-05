cmake_minimum_required(VERSION 3.10)
project(Unions)

add_executable(unions main.cpp)
add_compile_options(-Wall -Wextra -Wpedantic)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

