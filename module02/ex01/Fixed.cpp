/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 20:32:32 by qli           #+#    #+#                 */
/*   Updated: 2020/11/27 20:32:32 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fracBits = 8;

Fixed::Fixed(void) : _fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedValue = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	return this->_fixedValue;
}

void Fixed::setRawBits(const int raw) {
	this->_fixedValue = raw;
}

Fixed::Fixed(const int n) : _fixedValue(n) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) :_fixedValue(f){
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const {
	return this->_fixedValue * (10 >> Fixed::_fracBits);
}

int Fixed::toInt(void) const {
	return this->_fixedValue * (10 << Fixed::_fracBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o << i.getRawBits();
	return o;
}