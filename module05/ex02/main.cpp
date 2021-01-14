//
// Created by qli on 14/01/2021.
//

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{

	// test presidential form
	Bureaucrat executor("executor", 1);
	PresidentialPardonForm presidential("you");
	std::cout << presidential << std::endl;

	std::cout << "----" << std::endl;
	executor.signForm(presidential);
	presidential.execute(executor);

	std::cout << "----" << std::endl;
	return 0;
}

