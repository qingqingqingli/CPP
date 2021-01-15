//
// Created by qli on 14/01/2021.
//

#ifndef EX00_SHRUBBERYCREATIONFORM_HPP
#define EX00_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	void execute(Bureaucrat const & executor) const;
	void executeForm() const;

};

#endif //EX00_SHRUBBERYCREATIONFORM_HPP
