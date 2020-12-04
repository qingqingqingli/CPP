cmake_minimum_required(VERSION 3.17)

project(ex02)

set(SOURCES ClapTrap.cpp ClapTrap.hpp main.cpp FragTrap.cpp FragTrap.hpp ScavTrap.cpp ScavTrap.hpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex02 ${SOURCES})