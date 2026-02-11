cmake_minimum_required(VERSION 4.1)
project(datum_proverka)

set(CMAKE_CXX_STANDARD 20)

add_executable(datum_proverka main.cpp
        datum.cpp
        datum.h)
