//
// Created by qli on 14/01/2021.
//

#ifndef EX00_INTERN_HPP
#define EX00_INTERN_HPP
#include "Form.hpp"


class Intern {

public:

	Intern();
	~Intern();
	Intern(Intern const & src);
	Intern & operator=(Intern const & rhs);

	Form* makeForm(std::string formName, std::string formTarget);

};


#endif //EX00_INTERN_HPP
