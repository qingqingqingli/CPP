/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 11:12:20 by qli           #+#    #+#                 */
/*   Updated: 2021/01/27 11:12:20 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>

Span::Span(unsigned int n) : _n(n), _v(new std::vector<int>[_n]()){
	return;
}

Span::~Span() {
	delete [] this->_v;
	return;
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
		throw (EnoughNumber());
	this->_v->push_back(number);
	this->_n--;
}

void Span::print() {
	std::cout << BLUE << "Stored Integers include: ";
	std::copy(this->_v->begin(), this->_v->end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << RESET << std::endl;
}

unsigned int Span::longestSpan() {
	if (this->_v->size() <= 1)
		throw (NoSpanToBeFound());

	std::vector<int> newVector(this->_v->size(), 0);
	std::adjacent_difference(this->_v->begin(), this->_v->end(), newVector.begin());

	std::vector<int>::iterator iter;
	for (iter = newVector.begin(); iter != newVector.end(); ++iter)
		*iter = std::abs(*iter);

	return (*std::max_element(newVector.begin() + 1, newVector.end()));
}

unsigned int Span::shortestSpan() {
	if (this->_v->size() <= 1)
		throw (NoSpanToBeFound());

	std::vector<int> newVector(this->_v->size(), 0);
	std::adjacent_difference(this->_v->begin(), this->_v->end(), newVector.begin());

	std::vector<int>::iterator iter;
	for (iter = newVector.begin(); iter != newVector.end(); ++iter)
		*iter = std::abs(*iter);

	return (*std::min_element(newVector.begin() + 1, newVector.end()));
}

void Span::fillVectorNumber(unsigned int n) {

	if (n > this->_n || !this->_n)
		throw (EnoughNumber());
	srand(time(NULL));
	for (unsigned int i = 0; i < n; i++)
		std::back_inserter(*this->_v) = rand() % 50;
	this->_n -= n;
}

