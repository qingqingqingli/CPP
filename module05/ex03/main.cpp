/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:45:12 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:45:12 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
	Intern randomIntern;

	Form* form1 = randomIntern.makeForm("presidential pardon", "dog");
	Form* form2 = randomIntern.makeForm("robotomy request", "cat");
	Form* form3 = randomIntern.makeForm("shrubbery creation", "fish");
	Form* form4 = randomIntern.makeForm("shrubbery", "no");

	std::cout << YELLOW << "<" << form1->getName() << "> is created to target <"<< form1->getFormTarget() << ">." << RESET << std::endl;
	std::cout << YELLOW << "<" << form2->getName() << "> is created to target <"<< form2->getFormTarget() << ">." << RESET << std::endl;
	std::cout << YELLOW << "<" << form2->getName() << "> is created to target <"<< form2->getFormTarget() << ">." << RESET << std::endl;

	delete form1;
	delete form2;
	delete form3;
	delete form4;
}
