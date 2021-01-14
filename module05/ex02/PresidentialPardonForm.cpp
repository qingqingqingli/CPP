//
// Created by qli on 14/01/2021.
//

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("PresidentialPardon", 145, 137)
{
	this->setFormTarget(target);
	std::cout << CYAN << "* A <" << this->getName() << "> is created with <" << this->getGradeToSign() << "> to sign and <" << this->getGradeToExecute() << "> to execute. *" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << MAGENTA << "* <" << this->getName() << "> is destroyed. *" << RESET << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute()){
	std::cout << YELLOW << "<PresidentialPardonForm> copy constructor is called." << RESET << std::endl;
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	if (this != &rhs)
	{
		this->setSignedResult(rhs.getSignedResult());
		this->setFormTarget(rhs.getFormTarget());
	}
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) {

	if (!this->checkFromtoExecute(executor))
		std::cout << MAGENTA << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << ">." << RESET << std::endl;
	else
	{
		std::cout << BLUE << this->getFormTarget() << " has been pardoned by Zafod Beeblebrox." << RESET << std::endl;
	}
}
