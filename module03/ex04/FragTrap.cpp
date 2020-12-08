/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 16:59:04 by qli           #+#    #+#                 */
/*   Updated: 2020/12/04 16:59:04 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <zconf.h>
#include <cstdlib>
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	std::cout << BLUE << "<FragTrap> Default constructor has created [" << this->getName() << "]." << RESET << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << RED << "<FragTrap> Default destructor has destroyed [" << this->getName() << "]." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src._name){

	*this = src;
	std::cout << BLUE << "<FragTrap> Copy constructor has created [" << this->getName() << "]." << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {

	std::cout << BLUE << "<FragTrap> Assignation operator called." << RESET << std::endl;
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

void FragTrap::vaulthunter_dot_exe(const std::string &target) {

	sleep(1);
	srand(time(NULL));
	std::string attack[5] = {"Miniontrap", "Meat Unicycle", "Funzerker", "Mechromagician", "Rubber Ducky"};
	this->_pointToAttack = 25;
	if (this->getEnergyPoints() < this->getPointsToAttack())
		std::cout << YELLOW << "<FragTrap> You are out of energy points to conduct an attack." << RESET << std::endl;
	else {
		this->_energyPoints -= this->getPointsToAttack();
		int ret = rand() % 10;
		int attackIndex = 0;
		if (ret == 0 || ret == 1)
			attackIndex = 0;
		else if (ret == 2 || ret == 3)
			attackIndex = 1;
		else if (ret == 4 || ret == 5)
			attackIndex = 2;
		else if (ret == 6 || ret == 7)
			attackIndex = 3;
		else if (ret == 8 || ret == 9)
			attackIndex = 4;
		std::cout << YELLOW << "<FragTrap> You took " << this->getPointsToAttack() << " energy points to run [" << attack[attackIndex] << "] on target [" << target << "]. Your current energy points are [" << this->getEnergyPoints() << "]." << RESET << std::endl;
	}
}
