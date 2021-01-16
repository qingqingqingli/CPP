/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:45:07 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:45:07 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

public:

	Intern();
	~Intern();
	Intern(Intern const & src);
	Intern & operator=(Intern const & rhs);

	Form* makeForm(std::string formName, std::string formTarget);

	Form* createPresidentialPardon(std::string formTarget);
	Form* createRobotomyRequest(std::string formTarget);
	Form* createShrubberyCreation(std::string formTarget);

};

// createFormFunction points to a member function of Intern that takes (std::string)
typedef Form* (Intern::*createFormFunction)(std::string formTarget);

#endif //INTERN_HPP
