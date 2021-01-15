//
// Created by qli on 14/01/2021.
//
#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
	Intern randomIntern;

	Form* form1 = randomIntern.makeForm("presidential pardon", "dog");
	Form* form2 = randomIntern.makeForm("robotomy request", "cat");
	Form* form3 = randomIntern.makeForm("shrubbery creation", "fish");

	// how come it's not overloaded
	std::cout << form1->getFormTarget() << std::endl;
	std::cout << form2->getFormTarget() << std::endl;
	std::cout << form3->getFormTarget() << std::endl;

	delete form1;
	delete form2;
	delete form3;
}
