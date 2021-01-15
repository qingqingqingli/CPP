/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:45:25 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:45:25 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
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


#endif //PRESIDENTIALPARDONFORM_HPP
