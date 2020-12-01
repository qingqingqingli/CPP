cmake_minimum_required(VERSION 3.17)

project(inheritance1)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(inheritance1 Animal.cpp Animal.h)