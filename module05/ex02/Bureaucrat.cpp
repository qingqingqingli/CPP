/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 15:07:44 by qli           #+#    #+#                 */
/*   Updated: 2021/01/14 15:07:44 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade){
	try {
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	catch (const GradeTooHighException & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	std::cout << GREEN << "* Bureaucrat <" << this->getName() << "> is born. *" << RESET << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << MAGENTA << "* Bureaucrat <" << this->getName() << "> is destroyed. *" << RESET << std::endl;

}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade()){
	std::cout << YELLOW << "Bureaucrat copy constructor called." << RESET << std::endl;
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	std::cout << YELLOW << "Bureaucrat assignation constructor called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

void Bureaucrat::setGrade(int grade) {
	this->_grade = grade;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::incrementGrade(int amount) {
	try
	{
		if (this->getGrade() - amount < 0) {
			throw Bureaucrat::GradeTooHighException();
		}
	}
	catch (Bureaucrat::GradeTooHighException & e) {
		std::cout << RED << e.what() << std::endl << RESET;
		return;
	}
	this->setGrade(this->getGrade() - amount);

}

void Bureaucrat::decrementGrade(int amount) {
	try {
		if (this->getGrade() + amount > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException & e) {
		std::cout << RED << e.what() << std::endl << RESET;
		return;
	}
	this->setGrade(this->getGrade() + amount);
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &i) {
	o << BLUE << i.getName() << ", bureaucrat grade <" << i.getGrade() << ">." << RESET;
	return o;
}

void Bureaucrat::signForm(Form &form) {
	if (form.getGradeToSign() >= this->getGrade())
	{
		form.setSignedResult(true);
		std::cout << BLUE << "<" << this->getName() << "> signs <" << form.getName() << ">" << RESET << std::endl;
	}
	else
		std::cout << YELLOW << "<" << this->getName() << "> cannot sign <" << form.getName() << "> because <the bureaucrat's grade is lower than the form's grade to sign>" << RESET << std::endl;
}
