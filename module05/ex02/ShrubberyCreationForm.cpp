//
// Created by qli on 14/01/2021.
//

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", 145, 137){
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
		Form("Shrubbery Creation", 145, 137)
{
	this->setFormTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << MAGENTA << "* <" << this->getName() << "> is destroyed. *" << RESET << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute()){
	std::cout << YELLOW << "<ShrubberyCreationForm> copy constructor is called." << RESET << std::endl;
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	if (this != &rhs)
	{
		this->setSignedResult(rhs.getSignedResult());
		this->setFormTarget(rhs.getFormTarget());
	}
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {

	if (!this->checkFormSignedStatus())
		std::cout << MAGENTA << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the form is not signed." << RESET << std::endl;
	else if (!this->checkFormExecuteGrade(executor))
		std::cout << MAGENTA << "<" << this->getName() << "> cannot be executed by <" << executor.getName() << "> because the executor does not have a high enough score." << RESET << std::endl;
	else
		executeForm();
}

void ShrubberyCreationForm::executeForm() const {
	std::ifstream inFile;
	inFile.open("ascii.txt");
	if (!inFile)
		std::cout << RED << "Open file error." << RESET << std::endl;

	std::string fileName = this->getFormTarget() + "_shrubbery";

	std::ofstream outFile(fileName.c_str());
	if (!outFile)
		std::cout << RED << "Create file error." << RESET << std::endl;

	std::string line;

	while(getline(inFile, line))
		outFile << line << std::endl;
	outFile.close();
}