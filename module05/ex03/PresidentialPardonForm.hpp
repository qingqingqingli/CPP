//
// Created by qli on 14/01/2021.
//

#ifndef EX00_PRESIDENTIALPARDONFORM_HPP
#define EX00_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
	PresidentialPardonForm();

public:
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const & src);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

	virtual void execute(Bureaucrat const & executor) const;
	virtual void executeForm() const;

};


#endif //EX00_PRESIDENTIALPARDONFORM_HPP
