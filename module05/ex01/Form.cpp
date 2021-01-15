//
// Created by qli on 14/01/2021.
//

#include <iostream>
#include "Form.hpp"

Form::Form() : _name("null"), _signed(false), _gradeToSign(0), _gradeToExecute(0) {
	return;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {

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

void Form::setSignedResult(bool signedResult) {
	this->_signed = signedResult;
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
		this->_signed = true;
		std::cout << BLUE << this->getName() << " is signed by " << bureaucrat.getName() << RESET << std::endl;
	}
}

std::ostream &operator<<(std::ostream &o, const Form &form) {
	if (form.getSignedResult())
		o << BLUE << "Form <" << form.getName() << "> is signed.";
	else
		o << RED << "Form <" << form.getName() << "> is not signed.";
	return o;
}
