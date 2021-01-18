/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:26:43 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:26:43 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	return;
}

PlasmaRifle::~PlasmaRifle() {
	return;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &rhs) {
	std::cout << YELLOW << "<PlasmaRifle> assignation operator is called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_damage = rhs.getDamage();
		this->_apcost = rhs.getAPCost();
	}
	return *this;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src) : AWeapon(src){
	std::cout << YELLOW << "<PlasmaRifle> copy constructor is called." << RESET << std::endl;
	*this = src;
}

void PlasmaRifle::attack() const {
	std::cout << MAGENTA << "* piouuu piouuu piouuu *" << RESET << std::endl;
}