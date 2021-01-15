/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:45:39 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:45:39 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const & src);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

	virtual void execute(Bureaucrat const & executor) const;
	virtual void executeForm() const;

};

#endif //ROBOTOMYREQUESTFORM_HPP
