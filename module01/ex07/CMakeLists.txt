cmake_minimum_required(VERSION 3.17)

project(ex07)

set(SOURCES replace.cpp input.txt)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex07 ${SOURCES})