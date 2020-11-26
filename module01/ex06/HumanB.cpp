/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 10:20:20 by qli           #+#    #+#                 */
/*   Updated: 2020/11/24 10:20:20 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

void HumanB::attack() {
	std::cout << this->_getName() << " attacks with his " << this->_weaponBPtr->getType() << std::endl;
}

HumanB::HumanB(const std::string &name) : _weaponBPtr(), _name(name){
	std::cout << GREEN << "[HumanA] constructor is called." << RESET << std::endl;
}

HumanB::~HumanB() {
	std::cout << RED << "[HumanB] destructor is called." << RESET << std::endl;
}

void HumanB::setWeapon(Weapon weaponName) {
	this->_weaponBPtr = &weaponName;
}

std::string HumanB::_getName() {
	return this->_name;
}
