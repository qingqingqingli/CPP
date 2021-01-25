cmake_minimum_required(VERSION 3.17)

project(ex02)

set(SOURCES Array.hpp main.cpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex02 ${SOURCES})