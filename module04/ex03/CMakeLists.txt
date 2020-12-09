cmake_minimum_required(VERSION 3.17)

project(ex03)

set(SOURCES main.cpp AMateria.cpp AMateria.hpp Ice.cpp Ice.hpp Cure.cpp Cure.hpp Character.cpp Character.hpp MateriaSource.cpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp main.cpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex03 ${SOURCES})