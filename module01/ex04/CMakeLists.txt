cmake_minimum_required(VERSION 3.17)

project(ex04)

set(SOURCES ex04.cpp ex04.cpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex04 ${SOURCES})