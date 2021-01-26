//
// Created by qli on 25/01/2021.
//

#pragma once
#include <vector>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
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
};
