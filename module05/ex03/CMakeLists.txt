cmake_minimum_required(VERSION 3.17)

project(ex03)

set(SOURCES main.cpp Bureaucrat.cpp Bureaucrat.hpp Form.cpp Form.hpp ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp PresidentialPardonForm.cpp PresidentialPardonForm.hpp Intern.cpp Intern.hpp RobotomyRequestForm.cpp RobotomyRequestForm.hpp)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

add_executable(ex03 ${SOURCES})