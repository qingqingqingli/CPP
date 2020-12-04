/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 20:34:09 by qli           #+#    #+#                 */
/*   Updated: 2020/11/28 20:34:09 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <zconf.h>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "../ScavTrap.hpp"


ScavTrap::ScavTrap(const std::string &name) : FragTrap(name) {

	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	std::cout << BLUE << "Default <ScavTrap> constructor has created [" << this->_name << "]." << RESET << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << RED << "Default <ScavTrap> destructor has destroyed [" << this->_name << "]." << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : FragTrap(src._name) {
	*this = src;
	std::cout << YELLOW << "<ScavTrap> copy constructor has created [" << this->_name << "]." << RESET << std::endl;

}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	std::cout << YELLOW << "<ScavTrap> assignation operator called." << RESET << std::endl;
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
	std::cout << BLUE << "Challenge [" << challenges[challengeIndex] << "] is chosen for you!" << RESET << std::endl;
}

