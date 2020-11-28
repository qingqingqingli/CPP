cmake_minimum_required(VERSION 3.17)

project(ex01)

set(SOURCES Fixed.cpp Fixed.hpp main.cpp "../../test_files/module02/function overload/Sample.cpp" "../../test_files/module02/function overload/Sample.h")

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex01 ${SOURCES})