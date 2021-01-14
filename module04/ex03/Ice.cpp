/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 10:17:38 by qli           #+#    #+#                 */
/*   Updated: 2021/01/14 10:17:38 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	_xp = 0;
	_type = "ice";
}

Ice::~Ice() {
}

Ice::Ice(const Ice &src) : AMateria("ice"){
	std::cout << MAGENTA << "Ice copy constructor" << RESET << std::endl;
	*this = src;
}

Ice &Ice::operator=(const Ice &rhs) {
	std::cout << MAGENTA << "Ice assignation operator" << RESET << std::endl;
	if (this != &rhs)
	{
		this->_xp = rhs.getXP();
		this->_type = rhs.getType();
	}
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << YELLOW << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
	this->setXP(this->getXP() + 10);
	//	std::cout << this->getXP() << std::endl;
}
