//
// Created by qli on 09/12/2020.
//

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

AMateria::AMateria(const std::string &type) : _xp(0), _type(type) {
}

AMateria::~AMateria() {
}

AMateria::AMateria(AMateria const &src) {
	std::cout << "AMateria copy constructor" << std::endl;
	*this = src;
}

AMateria &AMateria::operator=(AMateria const &rhs) {
	std::cout << "AMateria assignation operator" << std::endl;
	if (this != &rhs)
	{
		this->_xp = rhs.getXP();
		this->_type = rhs.getType();
	}
	return *this;
}

std::string const &AMateria::getType() const {
	return this->_type;
}

unsigned int AMateria::getXP() const {
	return this->_xp;
}

void AMateria::use(ICharacter &target) {
	this->setXP(this->getXP() + 10);
	std::cout << "AMateria heals " << target.getName() << " ." << std::endl;
}

void AMateria::setXP(unsigned int xp) {
	this->_xp = xp;
}
