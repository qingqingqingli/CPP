/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 11:12:28 by qli           #+#    #+#                 */
/*   Updated: 2021/01/27 11:12:28 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define CYAN			"\033[36m"				/* Cyan */

class EnoughNumber: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "No more number can be saved";
	}
};

class NoSpanToBeFound: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "No span can be found";
	}
};

class Span {

private:
	unsigned int	_n;
	std::vector<int> *_v;

public:
	explicit Span(unsigned int n = 0);
	~Span();
	Span(Span const & src);
	Span & operator=(Span const & rhs);

	void 			addNumber(int);
	unsigned int 	shortestSpan();
	unsigned int 	longestSpan();
	void 			print();

	void			fillVectorNumber(unsigned int);
};
