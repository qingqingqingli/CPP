cmake_minimum_required(VERSION 3.17)

project(ex03)

set(SOURCES Zombie.cpp main.cpp Zombie.hpp ZombieHorde.cpp ZombieHorde.hpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex03 ${SOURCES})