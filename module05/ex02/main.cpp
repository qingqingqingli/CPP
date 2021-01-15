//
// Created by qli on 14/01/2021.
//

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{
	// test presidential form
	Bureaucrat highGrade("highGrade", 1);
	Bureaucrat lowGrade("lowGrade", 150);
	PresidentialPardonForm presidential("Rabbit");
	std::cout << presidential << std::endl;

	// form cannot be executed because its not signed
	std::cout << "----" << std::endl;
	presidential.execute(highGrade);
	highGrade.executeForm(presidential);
	lowGrade.executeForm(presidential);

	// sign the form
	std::cout << "----" << std::endl;
	highGrade.signForm(presidential);

	// execute form
	std::cout << "----" << std::endl;
	presidential.execute(highGrade);
	highGrade.executeForm(presidential);
	presidential.execute(lowGrade);

	std::cout << "----" << std::endl;
	return 0;
}

