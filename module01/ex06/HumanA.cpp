/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 10:20:13 by qli           #+#    #+#                 */
/*   Updated: 2020/11/24 10:20:13 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << this->_getName() << " attacks with his " << this->_weaponARef.getType() << std::endl;
}

HumanA::HumanA(const std::string& name, const Weapon& weaponRef) : _weaponARef(weaponRef), _name(name){
	std::cout << GREEN << "[HumanA] constructor is called." << RESET << std::endl;
}

HumanA::~HumanA() {
	std::cout << RED << "[HumanA] destructor is called." << RESET << std::endl;
}

std::string HumanA::_getName() {
	return this->_name;
}
