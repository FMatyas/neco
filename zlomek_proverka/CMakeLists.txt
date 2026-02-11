cmake_minimum_required(VERSION 4.1)
project(zlomek_proverka)

set(CMAKE_CXX_STANDARD 20)

add_executable(zlomek_proverka main.cpp
        zlomek.cpp
        zlomek.h)
