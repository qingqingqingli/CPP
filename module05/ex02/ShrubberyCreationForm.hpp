/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:44:34 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:44:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	virtual void execute(Bureaucrat const & executor) const;
	virtual void executeForm() const;

};

#endif //SHRUBBERYCREATIONFORM_HPP
