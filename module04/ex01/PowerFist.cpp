/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:23:11 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:23:11 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon(){
	_name = "Power First";
	_damage = 50;
	_apcost = 8;
}

PowerFist::~PowerFist() {
	return;
}

PowerFist &PowerFist::operator=(const PowerFist &rhs) {
	std::cout << YELLOW << "<PowerFist> assignation operator is called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_damage = rhs.getDamage();
		this->_apcost = rhs.getAPCost();
	}
	return *this;
}

PowerFist::PowerFist(const PowerFist &src) : AWeapon(){
	std::cout << YELLOW << "<PowerFist> copy constructor is called." << RESET << std::endl;
	*this = src;
}

void PowerFist::attack() const {
	std::cout << MAGENTA << "* pschhh... SBAM! *" << RESET << std::endl;
}
