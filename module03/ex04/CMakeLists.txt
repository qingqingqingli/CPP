cmake_minimum_required(VERSION 3.17)

project(ex04)

set(SOURCES main.cpp NinjaTrap.cpp NinjaTrap.hpp ClapTrap.cpp ClapTrap.hpp FragTrap.cpp FragTrap.hpp SuperTrap.cpp SuperTrap.hpp ScavTrap.hpp ScavTrap.cpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex04 ${SOURCES})