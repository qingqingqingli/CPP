/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 10:17:29 by qli           #+#    #+#                 */
/*   Updated: 2021/01/14 10:17:29 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	_xp = 0;
	_type = "Cure";
}

Cure::~Cure() {
}

Cure::Cure(const Cure &src) : AMateria("cure"){
	std::cout << MAGENTA << "Cure copy constructor" << RESET << std::endl;
	*this = src;
}

Cure &Cure::operator=(const Cure &rhs) {
	std::cout << MAGENTA << "Cure assignation operator" << RESET << std::endl;
	if (this != &rhs)
	{
		this->_xp = rhs.getXP();
		this->_type = rhs.getType();
	}
	return *this;
}

Cure *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << YELLOW << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
	this->setXP(this->getXP() + 10);
//	std::cout << this->getXP() << std::endl;
}