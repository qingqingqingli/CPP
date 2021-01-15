//
// Created by qli on 14/01/2021.
//

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 25, 5){
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("presidential pardon", 25, 5)
{
	this->setFormTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return;
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

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {

	if (!this->checkFormSignedStatus())
		std::cout << MAGENTA << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the form is not signed." << RESET << std::endl;
	else if (!this->checkFormExecuteGrade(executor))
		std::cout << MAGENTA << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the executor does not have a high enough score." << RESET << std::endl;
	else
		executeForm();
}

void PresidentialPardonForm::executeForm() const {
	std::cout << BLUE << this->getFormTarget() << " has been pardoned by Zafod Beeblebrox." << RESET << std::endl;
}
