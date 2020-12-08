cmake_minimum_required(VERSION 3.17)

project(poly1)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(poly1 poly1.cpp)