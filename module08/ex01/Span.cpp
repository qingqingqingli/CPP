//
// Created by qli on 25/01/2021.
//

#include <iostream>
#include "Span.hpp"
#include <algorithm>
#include <iterator>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

Span::Span(unsigned int n) : _n(n), _v(new std::vector<int>[_n]()){
	std::cout << GREEN << "A vector of [" << this->_n << "] is created." << RESET << std::endl;
}

Span::~Span() {
	delete [] this->_v;
	std::cout << MAGENTA << "A vector is destroyed." << RESET << std::endl;
}

Span::Span(const Span &src) : _n(0), _v(NULL){
	std::cout << CYAN << "Copy constructor is called." << RESET << std::endl;
	*this = src;
}

Span &Span::operator=(const Span &rhs) {
	std::cout << CYAN << "Assignation operator is called." << RESET << std::endl;
	if (this != &rhs)
	{
		delete [] this->_v;
		this->_n = rhs._n;
		std::vector<int> *newVector = new std::vector<int>[_n];
		std::copy(rhs._v->begin(), rhs._v->end(), std::back_inserter(*newVector));
		this->_v = newVector;
	}
	return *this;
}

void Span::addNumber(int number) {
	if (!this->_n)
		throw (EnoughNumber()); // not sure if I need to return yet
	this->_v->push_back(number);
	this->_n--;
}

void Span::print() {
	std::cout << BLUE;
	std::copy(this->_v->begin(), this->_v->end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << RESET << std::endl;
}

//unsigned int Span::shortestSpan() {
//	return 0;
//}
//
//unsigned int Span::longestSpan() {
//	return 0;
//}
