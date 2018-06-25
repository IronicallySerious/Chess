cmake_minimum_required (VERSION 3.8)

project (Stick)

file (GLOB_RECURSE SOURCE
    source/*.cpp
)

add_executable (Stick main.cpp ${SOURCE})

target_include_directories(Stick PUBLIC ./include/)
