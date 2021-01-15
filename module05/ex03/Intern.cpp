//
// Created by qli on 14/01/2021.
//

#include <iostream>
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {
	return;
}

Intern::~Intern() {
	return;
}

Intern::Intern(const Intern &src) {
	std::cout << "Intern copy constructor called." << std::endl;
	*this = src;
}

Intern &Intern::operator=(const Intern &rhs) {
	std::cout << "Intern assignation operator called." << std::endl;
	if (this != &rhs)
		return *this;
	return *this;
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {

	std::string array[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
//	Form* formlist[3] = { new PresidentialPardonForm(formTarget), new RobotomyRequestForm(formTarget), new ShrubberyCreationForm(formTarget)};

	// need to change to array of pointers to member functions
	if (!formName.compare(array[0]))
	{
		std::cout << BLUE << "Intern creates <" << formName << ">." << RESET << std::endl;
		return new PresidentialPardonForm(formTarget);
	}
	else if (!formName.compare(array[1]))
	{
		std::cout << BLUE << "Intern creates <" << formName << ">." << RESET << std::endl;
		return new RobotomyRequestForm(formTarget);
	}
	else if (!formName.compare(array[2]))
	{
		std::cout << BLUE << "Intern creates <" << formName << ">." << RESET << std::endl;
		return new ShrubberyCreationForm(formTarget);
	}
	return NULL;
}
