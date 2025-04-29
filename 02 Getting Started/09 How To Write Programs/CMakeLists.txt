cmake_minimum_required(VERSION 3.10)
project(HowToWritePrograms)

add_executable(howtowriteprograms main.cpp)
add_compile_options(-Wall -Wextra -Wpedantic)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

