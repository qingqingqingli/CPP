//
// Created by qli on 14/01/2021.
//

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 72, 45){
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
		Form("Robotomy Request", 72, 45)
{
	this->setFormTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << MAGENTA << "* <" << this->getName() << "> is destroyed. *" << RESET << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute()){
	std::cout << YELLOW << "<RobotomyRequestForm> copy constructor is called." << RESET << std::endl;
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	if (this != &rhs)
	{
		this->setSignedResult(rhs.getSignedResult());
		this->setFormTarget(rhs.getFormTarget());
	}
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {

	if (!this->checkFormSignedStatus())
		std::cout << MAGENTA << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the form is not signed." << RESET << std::endl;
	else if (!this->checkFormExecuteGrade(executor))
		std::cout << MAGENTA << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the executor does not have a high enough score." << RESET << std::endl;
	else
		executeForm();
}

void RobotomyRequestForm::executeForm() const {

	std::cout << BLUE << "Drilling noises..." << RESET << std::endl;
	srand(time(NULL));
	int ret = rand() % 2;
	if (ret)
		std::cout << BLUE << "<" << this->getFormTarget() << "> has been robotomized successfully." << RESET << std::endl;
	else
		std::cout << BLUE << "The executor failed to robotomize <" << this->getFormTarget() << ">." << RESET << std::endl;
}