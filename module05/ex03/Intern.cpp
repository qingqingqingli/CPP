/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:45:02 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:45:02 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
// create a #define macro
#define CALL_CREATE_FORM(object, ptrToFunction) ((object).*(ptrToFunction))


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
	createFormFunction list[3] = {&Intern::createPresidentialPardon, &Intern::createRobotomyRequest, &Intern::createShrubberyCreation};

	for (int i = 0; i < 3; i++)
	{
		if (formName == array[i])
		{
			std::cout << BLUE << "Intern creates <" << formName << ">." << RESET << std::endl;
			return CALL_CREATE_FORM(*this, list[i]) (formTarget);
		}
	}
	std::cout << RED << "No matching form to create." << RESET << std::endl;
	return NULL;
}

Form *Intern::createPresidentialPardon(std::string formTarget) {
	return new PresidentialPardonForm(formTarget);
}

Form *Intern::createRobotomyRequest(std::string formTarget) {
	return new RobotomyRequestForm(formTarget);
}

Form *Intern::createShrubberyCreation(std::string formTarget) {
	return new ShrubberyCreationForm(formTarget);
}
