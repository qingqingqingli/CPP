/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:21:52 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:21:52 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) : _name(name), _ap(40) , _AWeaponPtr(NULL){
	return;
}

Character::~Character() {
	std::cout << RED << "<Character> [" << this->getName() << "] is destroyed." << RESET << std::endl;
}

Character::Character(const Character &src) {
	std::cout << YELLOW << "<Character> Copy constructor is called." << RESET << std::endl;
	*this = src;
}

Character &Character::operator=(const Character &rhs) {
	std::cout << YELLOW << "<Character> Assignation operator is called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_ap = rhs.getAP();
		this->_name = rhs.getName();
	}
	return *this;
}

void Character::recoverAP() {
	this->_ap += 10;
	if (this->getAP() > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon* aWeapon) {
	this->_AWeaponPtr = aWeapon;
}

void Character::attack(Enemy* & enemy) {

	if (!this->getAWeapon())
	{
		std::cout << RED << "equip your character with a weapon first." << RESET << std::endl;
		return;
	}
	if (this->getAP() < this->getAWeapon()->getAPCost())
	{
		std::cout << RED << "not enough AP to intialise an attack." << RESET << std::endl;
		return;
	}
	else
	{
		std::cout << CYAN << this->getName() << " attacks " << enemy->getType() << " with a " << this->getAWeapon()->getName() << RESET << std::endl;
		this->getAWeapon()->attack();
		enemy->takeDamage(this->getAWeapon()->getDamage());
		this->_ap -= this->getAWeapon()->getAPCost();
		if (enemy->getHP() < 0)
		{
			delete enemy;
			enemy = 0;
		}

	}
}

std::string Character::getName() const {
	return this->_name;
}

int Character::getAP() const {
	return this->_ap;
}

AWeapon* Character::getAWeapon() const {
	return this->_AWeaponPtr;
}

std::ostream &operator<<(std::ostream &o, const Character &character) {
	if (character.getAWeapon())
		o << BLUE << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getAWeapon()->getName() << RESET << std::endl;
	else
		o << BLUE << character.getName() << " has " << character.getAP() << " AP and is unarmed" << RESET << std::endl;
	return o;
}
