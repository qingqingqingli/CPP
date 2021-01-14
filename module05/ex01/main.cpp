//
// Created by qli on 14/01/2021.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{

	// create bureaucrats and forms
	Bureaucrat jim("jim", 50);
	Bureaucrat tom("tom", 100);

	Form badForm("bad", 50, 200);
	Form goodForm("good", 80, 80);

	std::cout << goodForm << std::endl;

	// test beSigned() function
	std::cout << "---" << std::endl;

	goodForm.beSigned(tom); // can't sign
	goodForm.beSigned(jim); // can sign

	// test signForm() function
	std::cout << "---" << std::endl;

	tom.signForm(goodForm); // can't sign
	jim.signForm(goodForm); // can sign

	// all objects are automatically destructed
	std::cout << "---" << std::endl;

	return 0;
}