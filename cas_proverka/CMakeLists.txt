cmake_minimum_required(VERSION 4.1)
project(cas_proverka)

set(CMAKE_CXX_STANDARD 20)

add_executable(cas_proverka main.cpp
        cas.cpp
        cas.h)
