/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 19:15:56 by qli           #+#    #+#                 */
/*   Updated: 2020/12/04 19:15:56 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name), NinjaTrap(name), FragTrap(name) {

	_hitPoints = FragTrap::_hitPoints;
	_maxHitPoints = FragTrap::_maxHitPoints;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armorDamageReduction = FragTrap::_armorDamageReduction;
	std::cout << BLUE << "<SuperTrap> Default constructor has created [" << this->_name << "]." << RESET << std::endl;
}

SuperTrap::~SuperTrap() {

	std::cout << RED << "<SuperTrap> Default destructor has destroyed [" << this->_name << "]." << RESET << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &src) : ClapTrap(src._name), NinjaTrap(src._name), FragTrap(src._name) {
	*this = src;
	std::cout << BLUE << "<SuperTrap>> Copy constructor has created [" << this->_name << "]." << RESET << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &rhs) {

	std::cout << BLUE << "<SuperTrap> Assignation operator called." << RESET << std::endl;
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
		this->_pointToAttack = rhs._pointToAttack;
	}
	return *this;
}
