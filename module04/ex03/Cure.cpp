
#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("Cure"){
	std::cout << "Cure constructor" << std::endl;
	_xp = 0;
	_type = "Cure";
	return;
}

Cure::~Cure() {
	std::cout << "Cure destructor" << std::endl;
	return;
}

Cure::Cure(const Cure &src) : AMateria("Cure"){
	std::cout << "Cure copy constructor" << std::endl;
	*this = src;
}

Cure &Cure::operator=(const Cure &rhs) {
	std::cout << "AMateria assignation operator" << std::endl;
	if (this != &rhs)
	{
		this->_xp = rhs.getXP();
		this->_type = rhs.getType();
	}
	return *this;
}

AMateria *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}