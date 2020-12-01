/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 20:32:07 by qli           #+#    #+#                 */
/*   Updated: 2020/11/28 20:32:07 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

// canonical form

FragTrap::FragTrap(const std::string &name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5) {

	std::cout << BLUE << "Default constructor has created [" << this->_name << "]." << RESET << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << RED << "Default destructor has destroyed [" << this->_name << "]." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) {
	*this = src;
	std::cout << YELLOW << "Copy constructor has created [" << this->_name << "]." << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
	std::cout << YELLOW << "Assignation operator called." << RESET << std::endl;
	if (this != &rhs) {
		this->_hitPoints = rhs._hitPoints;
		this->_maxHitPoints = rhs._maxHitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_maxEnergyPoints = rhs._maxEnergyPoints;
		this->_level = rhs._level;
		this->_name = rhs._name;
		this->_meleeAttackDamage = rhs._meleeAttackDamage;
		this->_rangedAttackDamage = rhs._rangedAttackDamage;
		this->_armorDamageReduction = rhs._armorDamageReduction;
	}
	return *this;
}

void FragTrap::rangedAttack(const std::string &target) {

	unsigned int damage = 10;
	takeDamage(10);
	std::cout << CYAN << "FR4G-TP [" << this->_name << "] attacks [" << target << "] at range, causing [" << damage << "] points of damage! [" << this->_name << "] currently has [" << this->_hitPoints << "] hit points." << std::endl;
}

//void FragTrap::meleeAttack(const std::string &target) {
//
//}
//

void FragTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
}

//void FragTrap::beRepaired(unsigned int amount) {
//
//}
//
//void FragTrap::vaulthunter_dot_exe(const std::string &target) {
//
//}
