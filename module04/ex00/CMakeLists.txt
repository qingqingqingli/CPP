cmake_minimum_required(VERSION 3.17)

project(ex00)

set(SOURCES main.cpp Sorcerer.cpp Sorcerer.hpp Victim.cpp Victim.hpp Peon.cpp Peon.hpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex00 ${SOURCES})