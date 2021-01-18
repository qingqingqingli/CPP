/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 10:17:20 by qli           #+#    #+#                 */
/*   Updated: 2021/01/14 10:17:20 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character() : _name("Character"), _materia(new AMateria*[4]()){

}

Character::Character(const char *name) : _name(name), _materia(new AMateria*[4]()){

}

Character::~Character() {
	int i = 0;
	while (i < 3)
	{
		if (_materia[i])
			delete (_materia[i]);
		i++;
	}
	delete[] (_materia);
}

Character::Character(const Character &src) {

	this->_materia = new AMateria*[4]();
	std::cout << BLUE << "Character copy constructor" << RESET << std::endl;
	*this = src;
}

void	deleteMateria(AMateria** materia)
{
	int i = 0;
	while (i < 3)
	{
		if (materia[i])
			delete (materia[i]);
		i++;
	}
	delete[] materia;
}

Character &Character::operator=(const Character &rhs) {
	std::cout << BLUE << "Character assignation operator" << RESET << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		if (this->_materia) {
			deleteMateria(this->_materia);
		}
		AMateria **materialNew = new AMateria*[4];
		int i = 0;
		while (i < 3)
		{
			if (rhs._materia[i])
				materialNew[i] = rhs._materia[i]->clone();
			else
				materialNew[i] = NULL;
			i++;
		}
		this->_materia = materialNew;
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
	{
		if (!this->_materia[i])
			break;
		i++;
	}
	if (i == 3 && this->_materia[i])
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
		std::cout << MAGENTA << "Materia " << idx << " unequipped." << RESET << std::endl;
	}
	else
		std::cout << MAGENTA << "The Materia to unequip does not exist." << RESET << std::endl;
}

void Character::use(int idx, ICharacter &target) {

	AMateria *materiaUse = this->getMateria(idx);
	if (materiaUse && (!materiaUse->getType().compare("ice") || !materiaUse->getType().compare("cure")))
		materiaUse->use(target);
	else
	{
		std::cout << RED << "invalid materia to use." << RESET << std::endl;
		delete materiaUse;
	}
}

AMateria *Character::getMateria(int i) {
	return this->_materia[i];
}
