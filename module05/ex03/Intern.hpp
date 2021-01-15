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


class Intern {

public:

	Intern();
	~Intern();
	Intern(Intern const & src);
	Intern & operator=(Intern const & rhs);

	Form* makeForm(std::string formName, std::string formTarget);

};


#endif //INTERN_HPP
