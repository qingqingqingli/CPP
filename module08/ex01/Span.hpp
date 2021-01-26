//
// Created by qli on 25/01/2021.
//

#pragma once
#include <vector>

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
	Span(unsigned int n = 0);
	~Span();
	Span(Span const & src);
	Span & operator=(Span const & rhs);

	void 			addNumber(int);
//	unsigned int	shortestSpan();
//	unsigned int	longestSpan();
	void 			print();

};
