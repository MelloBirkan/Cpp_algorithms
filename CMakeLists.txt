cmake_minimum_required(VERSION 3.27)
project(algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(algorithms main.cpp
        algorithm.cpp
        algorithm.h)
