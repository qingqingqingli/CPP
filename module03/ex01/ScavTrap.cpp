/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 16:25:05 by qli           #+#    #+#                 */
/*   Updated: 2020/12/04 16:25:05 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <zconf.h>
#include <cstdlib>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3), _pointToAttack(0) {

	std::cout << BLUE << "<ScavTrap> Default constructor has created [" << this->_name << "]." << RESET << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << RED << "<ScavTrap> Default destructor has destroyed [" << this->_name << "]." << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
	*this = src;
	std::cout << BLUE << "<ScavTrap> Copy constructor has created [" << this->_name << "]." << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	std::cout << BLUE << "<ScavTrap> Assignation operator called." << RESET << std::endl;
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

void ScavTrap::rangedAttack(const std::string &target) {

	takeDamage(this->_rangedAttackDamage);
	if (this->_hitPoints > 0)
		std::cout << CYAN << "<ScavTrap> Badass! FR4G-TP [" << this->_name << "] attacks [" << target << "] at range, causing [" << this->_rangedAttackDamage << "] points of damage! [" << this->_name << "] currently has [" << this->_hitPoints << "] hit points." << RESET << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {

	takeDamage(this->_meleeAttackDamage);
	if (this->_hitPoints > 0)
		std::cout << CYAN << "<ScavTrap> Hyah! FR4G-TP [" << this->_name << "] attacks [" << target << "] at melee, causing [" << this->_meleeAttackDamage << "] points of damage! [" << this->_name << "] currently has [" << this->_hitPoints << "] hit points." << RESET << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {

	this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount ;
	if (this->_hitPoints <= 0){
		this->_level = 0;
		std::cout << RED << "<ScavTrap> [" << this->_name << "] has taken too much damage and degraded to level 0. It means that [" << this->_name << "] has died." << RESET << std::endl;
	}
	else{
		std::cout << GREEN << "<ScavTrap> Extra ouch! Attack happened! You're taking [" << amount << "] points damage. Your armor reduced [" << this->_armorDamageReduction << "] points." << RESET << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount) {

	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints){
		this->_hitPoints = this->_maxHitPoints;
		std::cout << MAGENTA << "<ScavTrap> HP is charged to [" << this->_maxHitPoints << "] points. " << RESET << std::endl;
	}
	else{
		std::cout << MAGENTA << "<ScavTrap> HP have been repaired and added [" << amount << "] points. Your current HP is [" << this->_hitPoints << "] points." << RESET << std::endl;
	}
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