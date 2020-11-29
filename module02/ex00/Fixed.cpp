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

// integer to fixed point value
Fixed::Fixed(void){
	this->setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Default destructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedValue;
}

//converts int to fixed // not sure if correct
void Fixed::setRawBits(const int raw) {
	this->_fixedValue = raw >> Fixed::_fracBits;
}

const int Fixed::_fracBits = 8;
