/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 10:17:07 by qli           #+#    #+#                 */
/*   Updated: 2021/01/14 10:17:07 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

AMateria::AMateria() : _xp(0), _type("not set"){
	return;
}

AMateria::AMateria(const std::string &type) : _xp(0), _type(type) {
	return;
}

AMateria::~AMateria() {
	return;
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
