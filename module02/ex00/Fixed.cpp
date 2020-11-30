/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 20:10:12 by qli           #+#    #+#                 */
/*   Updated: 2020/11/27 20:10:12 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

// int to fixed
Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::~Fixed(void) {
	std::cout << "Default destructor called" << std::endl;
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

// fixed to int
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedValue >> Fixed::_fracBits;
}

// int to fixed
void Fixed::setRawBits(const int raw) {
	this->_fixedValue = raw << Fixed::_fracBits;
}

const int Fixed::_fracBits = 8;
