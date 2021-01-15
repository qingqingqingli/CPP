//
// Created by qli on 14/01/2021.
//

#ifndef EX00_FORM_HPP
#define EX00_FORM_HPP
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
	Form();

public:
	Form(std::string name, int gradeToSign, int gradeToExecute);
	~Form();
	Form(Form const & src);
	Form & operator=(Form const & rhs);

	std::string getName() const;
	bool getSignedResult() const;
	void setSignedResult(bool signedResult);
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat & bureaucrat);

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

#endif //EX00_FORM_HPP
