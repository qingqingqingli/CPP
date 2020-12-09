cmake_minimum_required(VERSION 3.17)

project(ex01)

set(SOURCES main.cpp AWeapon.cpp AWeapon.hpp PlasmaRifle.cpp PlasmaRifle.hpp PowerFist.cpp PowerFist.hpp Enemy.cpp Enemy.hpp SuperMutant.cpp SuperMutant.hpp RadScorpion.cpp RadScorpion.hpp Character.cpp Character.hpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex01 ${SOURCES})