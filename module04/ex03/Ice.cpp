//
// Created by qli on 09/12/2020.
//

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice constructor" << std::endl;
	_xp = 0;
	_type = "ice";
	return;
}

Ice::~Ice() {
	std::cout << "Ice destructor" << std::endl;
	return;
}

Ice::Ice(const Ice &src) : AMateria("Ice"){
	std::cout << "Ice copy constructor" << std::endl;
	*this = src;
}

Ice &Ice::operator=(const Ice &rhs) {
	std::cout << "AMateria assignation operator" << std::endl;
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
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
