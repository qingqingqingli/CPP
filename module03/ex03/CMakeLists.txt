cmake_minimum_required(VERSION 3.17)

project(ex03)

set(SOURCES main.cpp NinjaTrap.cpp NinjaTrap.hpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex03 ${SOURCES})