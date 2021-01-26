//
// Created by qli on 25/01/2021.
//

#include <iostream>
#include "Span.hpp"
#include <algorithm>
#include <iterator>
#include <numeric>

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
		std::vector<int> *newVector = new std::vector<int>[rhs._v->size()];
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

//unsigned int Span::longestSpan() {
//	return 0;
//}

unsigned int Span::shortestSpan() {
	if (this->_v->size() <= 1)
		throw (NoSpanToBeFound());

	std::vector<int> newVector(this->_v->size(), 0);
	std::adjacent_difference(this->_v->begin(), this->_v->end(), newVector.begin());

	std::copy(newVector.begin(), newVector.end(), std::ostream_iterator<int>(std::cout, " "));

	return 0;
}