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

const int Fixed::_fracBits = 8; // always 8 fractional bits

// no value given
Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

// int to fixed -> not sure if it's correct
Fixed::Fixed(const int n) : _fixedValue(n) {
	std::cout << "Int constructor called" << std::endl;
	std::cout << YELLOW << "original integer = " << n << std::endl;
	std::cout << "fixed value = " << this->_fixedValue << RESET << std::endl;
}

// float to fixed
Fixed::Fixed(const float f) {
	this->_fixedValue = round(f * (1 << Fixed::_fracBits));
	std::cout << "Float constructor called" << std::endl;
	std::cout << YELLOW << "original float = " << f << std::endl;
	std::cout << "fixed value = " << this->_fixedValue << RESET << std::endl;
}

Fixed::~Fixed() {
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
	return (round(this->_fixedValue / (1 << Fixed::_fracBits)));
}

void Fixed::setRawBits(const int raw) {
	this->_fixedValue = raw;
}

// fixed to float
float Fixed::toFloat(void) const {
	return (this->_fixedValue / (1 << Fixed::_fracBits));
}

// fixed to int
int Fixed::toInt(void) const {
	return this->_fixedValue;
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o << i.getRawBits();
	return o;
}