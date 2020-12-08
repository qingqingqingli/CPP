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

	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;

	std::cout << BLUE << "<FragTrap> Default constructor has created [" << this->_name << "]." << RESET << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << RED << "<FragTrap> Default destructor has destroyed [" << this->_name << "]." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src._name){

	*this = src;
	std::cout << BLUE << "<FragTrap> Copy constructor has created [" << this->_name << "]." << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {

	std::cout << BLUE << "<FragTrap> Assignation operator called." << RESET << std::endl;
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

void FragTrap::vaulthunter_dot_exe(const std::string &target) {

	sleep(1);
	srand(time(NULL));
	std::string attack[5] = {"Miniontrap", "Meat Unicycle", "Funzerker", "Mechromagician", "Rubber Ducky"};
	this->_pointToAttack = 25;
	if (this->_energyPoints < this->_pointToAttack)
		std::cout << YELLOW << "<FragTrap> You are out of energy points to conduct an attack." << RESET << std::endl;
	else {
		this->_energyPoints -= this->_pointToAttack;
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
		std::cout << YELLOW << "<FragTrap> You took " << this->_pointToAttack << " energy points to run [" << attack[attackIndex] << "] on target [" << target << "]. Your current energy points are [" << this->_energyPoints << "]." << RESET << std::endl;
	}
}
