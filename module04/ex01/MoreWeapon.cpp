/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MoreWeapon.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 10:52:40 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 10:52:40 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MoreWeapon.hpp"

MoreWeapon::MoreWeapon() : AWeapon("More Weapon", 8, 50){
	return;
}

MoreWeapon::~MoreWeapon() {
	return;
}

MoreWeapon &MoreWeapon::operator=(const MoreWeapon &rhs) {
	std::cout << YELLOW << "<MoreWeapon> assignation operator is called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_damage = rhs.getDamage();
		this->_apcost = rhs.getAPCost();
	}
	return *this;
}

MoreWeapon::MoreWeapon(const MoreWeapon &src) : AWeapon(){
	std::cout << YELLOW << "<MoreWeapon> copy constructor is called." << RESET << std::endl;
	*this = src;
}

void MoreWeapon::attack() const {
	std::cout << MAGENTA << "* More weapon is attacking you! *" << RESET << std::endl;
}
