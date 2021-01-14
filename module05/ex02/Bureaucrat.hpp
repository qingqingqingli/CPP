/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 15:07:57 by qli           #+#    #+#                 */
/*   Updated: 2021/01/14 15:07:57 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
#include <string>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class Form;

class Bureaucrat {

private:
	const std::string _name;
	int	_grade;

public:

	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat & operator=(Bureaucrat const & rhs);

	std::string getName() const;
	int	getGrade() const;
	void setGrade(int);
	void incrementGrade(int);
	void decrementGrade(int);

	void signForm(Form & form);

	class GradeTooHighException : public std::exception
	{
	public:
		const char * what () const throw ()
		{
			return ("Grade is too high (smaller than 1).");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char * what () const throw ()
		{
			return ("Grade is too low (bigger than 150).");
		}
	};

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif //EX00_BUREAUCRAT_HPP
