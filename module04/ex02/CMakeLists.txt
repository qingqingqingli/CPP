cmake_minimum_required(VERSION 3.17)

project(ex02)

set(SOURCES main.cpp Squad.cpp Squad.hpp TacticalMarine.cpp TacticalMarine.hpp AssaultTerminator.cpp AssaultTerminator.hpp ISpaceMarine.hpp ISquad.hpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex02 ${SOURCES})