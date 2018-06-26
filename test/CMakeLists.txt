cmake_minimum_required(VERSION 2.8)

project(wheson-CP-lib)

set(CMAKE_CXX_FLAGS "-g -Wall")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(.)

add_subdirectory(lib)
enable_testing()
add_subdirectory(gtest-1.8.0)
add_subdirectory(test)
