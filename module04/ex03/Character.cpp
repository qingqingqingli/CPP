
#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string &name) : _name(name) {
	std::cout << "Character constructor" << std::endl;
	_materia[0] = NULL;
	_materia[1] = NULL;
	_materia[2] = NULL;
	_materia[3] = NULL;
	return;
}

Character::~Character() {
	std::cout << "Character destructor" << std::endl;
	return;
}

Character::Character(const Character &src) {
	std::cout << "Character copy constructor" << std::endl;
	*this = src;
}

Character &Character::operator=(const Character &rhs) {
	std::cout << "Character assignation operator" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
	}
	return *this;
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {

}

void Character::unequip(int idx) {

}

void Character::use(int idx, ICharacter &target) {
	AMateria *materiaUse = this->getMateria(idx);
	materiaUse->use(target);

}

AMateria *Character::getMateria(int i) {
	return this->_materia[i];
}
