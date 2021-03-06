/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:43:49 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:43:49 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

Form::Form() : _name("null"), _signed(false), _gradeToSign(0), _gradeToExecute(0) {
	return;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){

	try
	{
		if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
			throw GradeTooHighException();
		else if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
			throw GradeTooLowException();
	}
	catch (const GradeTooHighException & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}
	catch (const GradeTooLowException & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
	}

	std::cout << GREEN << "* Form <" << this->getName() << "> is created with <" << this->getGradeToSign() << "> grade to sign and <" << this->getGradeToExecute() << "> to execute. *" << RESET << std::endl;
}

Form::~Form() {
	std::cout << MAGENTA << "* Form <" << this->getName() << "> is destroyed. *" << RESET << std::endl;
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSignedResult()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {
	std::cout << YELLOW << "Form copy constructor is called." << std::endl;
	*this = src;
}

Form &Form::operator=(const Form &rhs) {
	std::cout << YELLOW << "Form assignation operator is called." << std::endl;
	if (this != &rhs)
	{
		this->_signed = rhs.getSignedResult();
	}
	return *this;
}

std::string Form::getName() const {
	return this->_name;
}

bool Form::getSignedResult() const {
	return this->_signed;
}

int Form::getGradeToSign() const {
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	try
	{
		if (this->getGradeToSign() < bureaucrat.getGrade())
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
		return;
	}
	if (this->getGradeToSign() >= bureaucrat.getGrade())
	{
		this->setSignedResult(true);
		std::cout << BLUE << "<" << this->getName() << "> is signed by <" << bureaucrat.getName() << ">" << RESET << std::endl;
	}
}

bool Form::checkFormSignedStatus(void) const {

	if (this->getSignedResult())
		return true;
	return false;
}

bool Form::checkFormExecuteGrade(const Bureaucrat &executor) const {
	try
	{
		if (this->getGradeToExecute() < executor.getGrade())
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException & e)
	{
		std::cout << RED << e.what() << RESET << std::endl;
		return false;
	}
	return true;
}

void Form::setFormTarget(std::string target) {
	this->_target = target;
}

std::string Form::getFormTarget() const {
	return this->_target;
}


void Form::setSignedResult(bool signedResult) {
	this->_signed = signedResult;
}

void Form::execute(const Bureaucrat &executor) const {
	if (!this->checkFormSignedStatus())
		std::cout << MAGENTA << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the form is not signed." << RESET << std::endl;
	else if (!this->checkFormExecuteGrade(executor))
		std::cout << MAGENTA << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the executor does not have a high enough score." << RESET << std::endl;
	else
		executeForm();
}

std::ostream &operator<<(std::ostream &o, const Form &form) {
	if (form.getSignedResult())
		o << BLUE << "Form <" << form.getName() << "> is signed." << RESET;
	else
		o << RED << "Form <" << form.getName() << "> is not signed." << RESET;
	return o;
}
