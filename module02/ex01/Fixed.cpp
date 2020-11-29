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

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const {
	return this->_fixedValue;
}

// int to fixed using setRawBits(int n)
Fixed::Fixed(int n){
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n);
}

// float to fixed using setRawBits(float n)
Fixed::Fixed(float f) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(f);
}

// int to fixed
void Fixed::setRawBits(const int raw) {
	this->_fixedValue = raw << Fixed::_fracBits;
}

// fixed to int
int Fixed::toInt(void) const {
	return round(this->_fixedValue >> Fixed::_fracBits);
}

// float to fixed
void Fixed::setRawBits(const float raw) {
	this->_fixedValue = raw * (1 << Fixed::_fracBits) + 1;
}

// fixed to float
float Fixed::toFloat(void) const {
	return (float)this->_fixedValue / ( 1 << Fixed::_fracBits);
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

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return o;
}