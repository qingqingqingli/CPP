/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:43:54 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:43:54 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include "Bureaucrat.hpp"

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class Form {

private:

	const std::string _name;
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExecute;
	std::string _target;
	Form();

public:
	Form(std::string name, int gradeToSign, int gradeToExecute);
	virtual ~Form();
	Form(Form const & src);
	Form & operator=(Form const & rhs);

	std::string getName() const;
	bool getSignedResult() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat & bureaucrat);

	virtual void execute(Bureaucrat const & executor) const = 0;
	virtual void executeForm() const = 0;
	bool checkFormSignedStatus() const;
	bool checkFormExecuteGrade(Bureaucrat const & executor) const;

	void setFormTarget(std::string target);
	std::string getFormTarget() const;
	void setSignedResult(bool signedResult);


	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("<Form> Grade too high (smaller than 1).");
			}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("<Form> Grade too low (bigger than 150).");
		}
	};

};

std::ostream & operator<<(std::ostream & o, Form const & form);

#endif //FORM_HPP
