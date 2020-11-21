cmake_minimum_required(VERSION 3.17)

project(ex05)

set(SOURCES main.cpp Brain.cpp Brain.hpp Human.cpp Human.hpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex05 ${SOURCES})