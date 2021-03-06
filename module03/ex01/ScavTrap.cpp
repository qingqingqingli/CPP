/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 16:25:05 by qli           #+#    #+#                 */
/*   Updated: 2020/12/08 16:11:51 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <zconf.h>
#include <cstdlib>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) :
_hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), \
_level(1), _name(name), _meleeAttackDamage(20), _rangedAttackDamage(15), \
_armorDamageReduction(3), _pointToAttack(0)
{
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

void ScavTrap::rangedAttack(const std::string &target) {

	takeDamage(this->getRangedAttackDamage());
	if (this->getHitPoints() > 0)
		std::cout << CYAN << "<ScavTrap> Badass! FR4G-TP [" << this->getName() << "] attacks [" << target << "] at range, causing [" << this->getRangedAttackDamage() - this->getArmorDamageReduction() << "] points of damage! [" << this->getName() << "] currently has [" << this->getHitPoints() << "] hit points." << RESET << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target) {

	takeDamage(this->getMeleeAttackDamage());
	if (this->getHitPoints() > 0)
		std::cout << CYAN << "<ScavTrap> Hyah! FR4G-TP [" << this->getName() << "] attacks [" << target << "] at melee, causing [" << this->getMeleeAttackDamage() - this->getArmorDamageReduction() << "] points of damage! [" << this->getName() << "] currently has [" << this->getHitPoints() << "] hit points." << RESET << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {

	this->_hitPoints = this->getHitPoints() + this->getArmorDamageReduction() - amount ;
	if (this->getHitPoints() <= 0){
		this->_level = 0;
		std::cout << RED << "<ScavTrap> [" << this->getName() << "] has taken too much damage and degraded to level 0. It means that [" << this->getName() << "] has died." << RESET << std::endl;
	}
	else{
		std::cout << GREEN << "<ScavTrap> Extra ouch! Attack happened! You're taking [" << amount << "] points damage. Your armor reduced [" << this->getArmorDamageReduction() << "] points." << RESET << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount) {

	this->_hitPoints += amount;
	if (this->getHitPoints() > this->getMaxHitPoints()){
		this->_hitPoints = this->getMaxHitPoints();
		std::cout << MAGENTA << "<ScavTrap> HP is charged to [" << this->getMaxHitPoints() << "] points. " << RESET << std::endl;
	}
	else{
		std::cout << MAGENTA << "<ScavTrap> HP have been repaired and added [" << amount << "] points. Your current HP is [" << this->getHitPoints() << "] points." << RESET << std::endl;
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

int ScavTrap::getHitPoints(void) const {
	return this->_hitPoints;
}

int ScavTrap::getMaxHitPoints(void) const {
	return this->_maxHitPoints;
}

int ScavTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

int ScavTrap::getMaxEnergyPoints(void) const {
	return this->_maxEnergyPoints;
}

int ScavTrap::getLevel(void) const {
	return this->_level;
}

std::string ScavTrap::getName(void) const {
	return this->_name;
}

int ScavTrap::getMeleeAttackDamage(void) const {
	return this->_meleeAttackDamage;
}

int ScavTrap::getRangedAttackDamage(void) const {
	return this->_rangedAttackDamage;
}

int ScavTrap::getArmorDamageReduction(void) const {
	return this->_armorDamageReduction;
}

int ScavTrap::getPointsToAttack(void) const {
	return this->_pointToAttack;
}
