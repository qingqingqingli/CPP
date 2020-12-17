/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 19:19:30 by qli           #+#    #+#                 */
/*   Updated: 2020/12/16 19:19:30 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {
	_name = "not set";
	_apcost = 0;
	_damage = 0;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage){
	return;
}

AWeapon::~AWeapon() {
	std::cout << RED << "<AWeapon> [" << this->getName() << "] is destroyed." << RESET << std::endl;
}

AWeapon &AWeapon::operator=(const AWeapon & rhs) {
	std::cout << YELLOW << "<AWeapon> Assignation operator is called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_damage = rhs.getDamage();
		this->_apcost = rhs.getAPCost();
	}
	return *this;
}

AWeapon::AWeapon(const AWeapon & src) {
	std::cout << YELLOW << "<AWeapon> Copy constructor is called." << RESET << std::endl;
	*this = src;
}

std::string AWeapon::getName() const {
	return this->_name;
}

int AWeapon::getAPCost() const {
	return this->_apcost;
}

int AWeapon::getDamage() const {
	return this->_damage;
}
