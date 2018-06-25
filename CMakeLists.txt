cmake_minimum_required (VERSION 3.8)

project (Stick)

file (GLOB_RECURSE SOURCE
    source/*.cpp
    /usr/include/c++/7.2.0/*
)

add_executable (Stick main.cpp ${SOURCE})

target_include_directories(Stick PUBLIC ./include/)
