cmake_minimum_required(VERSION 3.31)
project(LibDataTypes)


set(CMAKE_CXX_STANDARD 20)
add_library(LibDataTypes
        Double2.cpp
        Double3.cpp
        Ray.cpp
        Sphere.cpp
)

target_include_directories(LibDataTypes PUBLIC include)