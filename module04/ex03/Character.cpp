
#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character(std::string &name) : _name(name) {
	std::cout << "Character constructor" << std::endl;
	_materia[0] = NULL;
	_materia[1] = NULL;
	_materia[2] = NULL;
	_materia[3] = NULL;
}

Character::~Character() {
	std::cout << "Character destructor" << std::endl;
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
		this->_materia[0] = rhs._materia[0];
		this->_materia[1] = rhs._materia[1];
		this->_materia[2] = rhs._materia[2];
		this->_materia[3] = rhs._materia[3];
	}
	return *this;
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	if (!m)
	{
		std::cout << YELLOW << "The Materia to equip does not exsit." << RESET << std::endl;
		return;
	}
	int i = 0;
	while (this->_materia[i])
		i++;
	if (i == 3)
	{
		std::cout << YELLOW << "The inventory is full." << RESET << std::endl;
		return;
	}
	this->_materia[i] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3 && this->_materia[idx])
	{
		this->_materia[idx] = NULL;
		std::cout << MAGENTA << "Materia unequipped." << RESET << std::endl;
	}
	else
		std::cout << MAGENTA << "The Materia to unequip does not exist." << RESET << std::endl;
}

void Character::use(int idx, ICharacter &target) {
	AMateria *materiaUse = this->getMateria(idx);
	materiaUse->use(target);


}

AMateria *Character::getMateria(int i) {
	return this->_materia[i];
}
