cmake_minimum_required(VERSION 3.17)

project(abstract)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(abstract abstract.cpp)