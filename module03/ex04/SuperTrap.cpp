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

	_hitPoints = FragTrap::getHitPoints();
	_maxHitPoints = FragTrap::getMaxHitPoints();
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_level = 1;
	_name = name;
	_rangedAttackDamage = FragTrap::getRangedAttackDamage();
	_armorDamageReduction = FragTrap::getArmorDamageReduction();
	std::cout << BLUE << "<SuperTrap> Default constructor has created [" << this->getName() << "]." << RESET << std::endl;
}

SuperTrap::~SuperTrap() {

	std::cout << RED << "<SuperTrap> Default destructor has destroyed [" << this->getName() << "]." << RESET << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &src) : ClapTrap(src._name), NinjaTrap(src._name), FragTrap(src._name) {
	*this = src;
	std::cout << BLUE << "<SuperTrap>> Copy constructor has created [" << this->getName() << "]." << RESET << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &rhs) {

	std::cout << BLUE << "<SuperTrap> Assignation operator called." << RESET << std::endl;
	if (this != &rhs) {
		this->_hitPoints = rhs.getHitPoints();
		this->_maxHitPoints = rhs.getMaxHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_maxEnergyPoints = rhs.getMaxEnergyPoints();
		this->_level = rhs.getLevel();
		this->_name = rhs.getName();
		this->_meleeAttackDamage = rhs.getMeleeAttackDamage();
		this->_rangedAttackDamage = rhs.getRangedAttackDamage();
		this->_armorDamageReduction = rhs.getArmorDamageReduction();
		this->_pointToAttack = rhs.getPointsToAttack();
	}
	return *this;
}

void SuperTrap::meleeAttack(const std::string &target) {
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(const std::string &target) {
	ClapTrap::rangedAttack(target);
}
