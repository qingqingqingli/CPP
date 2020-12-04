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
#include <cstdlib>
#include <zconf.h>
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5), _pointToAttack(0) {

	std::cout << BLUE << "<FragTrap> Default constructor has created [" << this->_name << "]." << RESET << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << RED << "<FragTrap> Default destructor has destroyed [" << this->_name << "]." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) {
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

void FragTrap::rangedAttack(const std::string &target) {

	unsigned int damage = 35;
	takeDamage(damage);
	if (this->_hitPoints > 0)
		std::cout << CYAN << "<FragTrap> Badass! FR4G-TP [" << this->_name << "] attacks [" << target << "] at range, causing [" << damage << "] points of damage! [" << this->_name << "] currently has [" << this->_hitPoints << "] hit points." << RESET << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {

	unsigned int damage = 50;
	takeDamage(damage);
	if (this->_hitPoints > 0)
		std::cout << CYAN << "<FragTrap> Hyah! FR4G-TP [" << this->_name << "] attacks [" << target << "] at melee, causing [" << damage << "] points of damage! [" << this->_name << "] currently has [" << this->_hitPoints << "] hit points." << RESET << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	
	this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount ;
	if (this->_hitPoints <= 0){
		this->_level = 0;
		std::cout << RED << "<FragTrap> [" << this->_name << "] has taken too much damage and degraded to level 0. It means that [" << this->_name << "] has died." << RESET << std::endl;
	}
	else{
		std::cout << GREEN << "<FragTrap> Extra ouch! Attack happened! You're taking [" << amount << "] points damage. Your armor reduced [" << this->_armorDamageReduction << "] points." << RESET << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints){
		this->_hitPoints = this->_maxHitPoints;
		std::cout << MAGENTA << "<FragTrap> HP is charged to [" << this->_maxHitPoints << "] points. " << RESET << std::endl;
	}
	else{
		std::cout << MAGENTA << "<FragTrap> HP have been repaired and added [" << amount << "] points. Your current HP is [" << this->_hitPoints << "] points." << RESET << std::endl;
	}
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

