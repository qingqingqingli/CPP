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

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage){
	std::cout << GREEN << "<AWeapon> [" << this->getName() << "] is created." << RESET << std::endl;
}

AWeapon::~AWeapon() {
	std::cout << RED << "<AWeapon> [" << this->getName() << "] is destroyed." << RESET << std::endl;
}

AWeapon &AWeapon::operator=(const AWeapon &rhs) {
	return *this;
}

AWeapon::AWeapon(const AWeapon &src) {
	std::cout <<
	*this = src;
}

std::string AWeapon::getName() const {
	return std::string();
}

int AWeapon::getAPCost() const {
	return 0;
}

int AWeapon::getDamage() const {
	return 0;
}

void AWeapon::attack() const {

}