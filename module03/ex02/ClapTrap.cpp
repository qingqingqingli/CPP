/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 16:42:09 by qli           #+#    #+#                 */
/*   Updated: 2020/12/04 16:42:09 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(60), _maxEnergyPoints(60), _level(1), _name(name), _meleeAttackDamage(40), _rangedAttackDamage(30), _armorDamageReduction(20), _pointToAttack(10) {

	std::cout << BLUE << "<ClapTrap> Default constructor has created [" << this->_name << "]." << RESET << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << RED << "<ClapTrap> Default destructor has destroyed [" << this->_name << "]." << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {

	*this = src;
	std::cout << BLUE << "<ClapTrap> Copy constructor has created [" << this->_name << "]." << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {

	std::cout << BLUE << "<ClapTrap> Assignation operator called." << RESET << std::endl;
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

void ClapTrap::rangedAttack(const std::string &target) {

	takeDamage(this->_rangedAttackDamage);
	if (this->_hitPoints > 0)
		std::cout << CYAN << "<ClapTrap> Badass! FR4G-TP [" << this->_name << "] attacks [" << target << "] at range, causing [" << this->_rangedAttackDamage << "] points of damage! [" << this->_name << "] currently has [" << this->_hitPoints << "] hit points." << RESET << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {

	takeDamage(this->_meleeAttackDamage);
	if (this->_hitPoints > 0)
		std::cout << CYAN << "<ClapTrap> Hyah! FR4G-TP [" << this->_name << "] attacks [" << target << "] at melee, causing [" << this->_meleeAttackDamage << "] points of damage! [" << this->_name << "] currently has [" << this->_hitPoints << "] hit points." << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

	this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount ;
	if (this->_hitPoints <= 0){
		this->_level = 0;
		std::cout << RED << "<ClapTrap> [" << this->_name << "] has taken too much damage and degraded to level 0. It means that [" << this->_name << "] has died." << RESET << std::endl;
	}
	else{
		std::cout << GREEN << "<ClapTrap> Extra ouch! Attack happened! You're taking [" << amount << "] points damage. Your armor reduced [" << this->_armorDamageReduction << "] points." << RESET << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {

	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints){
		this->_hitPoints = this->_maxHitPoints;
		std::cout << MAGENTA << "<FClapTrap> HP is charged to [" << this->_maxHitPoints << "] points. " << RESET << std::endl;
	}
	else{
		std::cout << MAGENTA << "<ClapTrap> HP have been repaired and added [" << amount << "] points. Your current HP is [" << this->_hitPoints << "] points." << RESET << std::endl;
	}
}


