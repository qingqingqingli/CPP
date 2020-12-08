/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 17:09:39 by qli           #+#    #+#                 */
/*   Updated: 2020/12/04 17:09:39 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <zconf.h>
#include <cstdlib>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	this->_pointToAttack = 0;
	std::cout << BLUE << "<ScavTrap> Default constructor has created [" << this->getName() << "]." << RESET << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << RED << "<ScavTrap> Default destructor has destroyed [" << this->getName() << "]." << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src._name){

	*this = src;
	std::cout << BLUE << "<ScavTrap> Copy constructor has created [" << this->getName() << "]." << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {

	std::cout << BLUE << "<ScavTrap> Assignation operator called." << RESET << std::endl;
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

void ScavTrap::challengeNewcomer(void) {

	sleep(1);
	srand(time(NULL));
	std::string challenges[5] = {"Miniontrap", "Meat Unicycle", "Funzerker", "Mechromagician", "Rubber Ducky"};
	int ret = rand() % 10;
	int challengeIndex = 0;
	if (ret == 0 || ret == 1)
		challengeIndex = 0;
	else if (ret == 2 || ret == 3)
		challengeIndex = 1;
	else if (ret == 4 || ret == 5)
		challengeIndex = 2;
	else if (ret == 6 || ret == 7)
		challengeIndex = 3;
	else if (ret == 8 || ret == 9)
		challengeIndex = 4;
	std::cout << BLUE << "<ScavTrap> Challenge [" << challenges[challengeIndex] << "] is chosen for you!" << RESET << std::endl;
}