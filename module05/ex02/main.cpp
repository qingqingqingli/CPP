/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:44:00 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:44:00 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main(void)
{
	std::cout << std::endl << "--ShrubberyCreationForm--" << std::endl;

	{
		Bureaucrat highGrade("highGrade", 1);
		Bureaucrat lowGrade("lowGrade", 150);
		ShrubberyCreationForm shrubbery("Rabbit");
		std::cout << shrubbery << std::endl;

		// form cannot be executed because its not signed
		std::cout << "----" << std::endl;
		shrubbery.execute(highGrade);
		highGrade.executeForm(shrubbery);
		lowGrade.executeForm(shrubbery);

		// sign the form
		std::cout << "----" << std::endl;
		highGrade.signForm(shrubbery);

		// execute form
		std::cout << "----" << std::endl;
		shrubbery.execute(lowGrade);
		shrubbery.execute(highGrade);
		highGrade.executeForm(shrubbery);

		std::cout << "----" << std::endl;
	}

	std::cout << std::endl << "--RobotomyRequestForm--" << std::endl;
	{
		Bureaucrat highGrade("highGrade", 1);
		Bureaucrat lowGrade("lowGrade", 150);
		RobotomyRequestForm robotomy("Rabbit");
		std::cout << robotomy << std::endl;

		// form cannot be executed because its not signed
		std::cout << "----" << std::endl;
		robotomy.execute(highGrade);
		highGrade.executeForm(robotomy);
		lowGrade.executeForm(robotomy);

		// sign the form
		std::cout << "----" << std::endl;
		highGrade.signForm(robotomy);

		// execute form
		std::cout << "----" << std::endl;
		robotomy.execute(lowGrade);
		robotomy.execute(highGrade);
		highGrade.executeForm(robotomy);

		std::cout << "----" << std::endl;
	}

	std::cout << std::endl << "--PresidentialPardonForm--" << std::endl;

	{
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
		presidential.execute(lowGrade);
		presidential.execute(highGrade);
		highGrade.executeForm(presidential);

		std::cout << "----" << std::endl;
	}

	return 0;
}

