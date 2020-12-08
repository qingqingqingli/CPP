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

void FragTrap::rangedAttack(const std::string &target) {

	takeDamage(this->getRangedAttackDamage());
	if (this->getHitPoints() > 0)
		std::cout << CYAN << "<FragTrap> Badass! FR4G-TP [" << this->getName() << "] attacks [" << target << "] at range, causing [" << this->getRangedAttackDamage() - this->getArmorDamageReduction() << "] points of damage! [" << this->getName() << "] currently has [" << this->getHitPoints() << "] hit points." << RESET << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {

	takeDamage(this->getMeleeAttackDamage());
	if (this->getHitPoints() > 0)
		std::cout << CYAN << "<FragTrap> Hyah! FR4G-TP [" << this->getName() << "] attacks [" << target << "] at melee, causing [" << this->getMeleeAttackDamage() - this->getArmorDamageReduction() << "] points of damage! [" << this->getName() << "] currently has [" << this->getHitPoints() << "] hit points." << RESET << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {

	this->_hitPoints = this->getHitPoints() + this->getArmorDamageReduction() - amount ;
	if (this->getHitPoints() <= 0){
		this->_level = 0;
		std::cout << RED << "<FragTrap> [" << this->getName() << "] has taken too much damage and degraded to level 0. It means that [" << this->getName() << "] has died." << RESET << std::endl;
	}
	else{
		std::cout << GREEN << "<FragTrap> Extra ouch! Attack happened! You're taking [" << amount << "] points damage. Your armor reduced [" << this->getArmorDamageReduction() << "] points." << RESET << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount) {

	this->_hitPoints += amount;
	if (this->getHitPoints() > this->getMaxHitPoints()){
		this->_hitPoints = this->getMaxHitPoints();
		std::cout << MAGENTA << "<FragTrap> HP is charged to [" << this->getMaxHitPoints() << "] points. " << RESET << std::endl;
	}
	else{
		std::cout << MAGENTA << "<FragTrap> HP have been repaired and added [" << amount << "] points. Your current HP is [" << this->getHitPoints() << "] points." << RESET << std::endl;
	}
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

int FragTrap::getHitPoints(void) const {
	return this->_hitPoints;
}

int FragTrap::getMaxHitPoints(void) const {
	return this->_maxHitPoints;
}

int FragTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

int FragTrap::getMaxEnergyPoints(void) const {
	return this->_maxEnergyPoints;
}

int FragTrap::getLevel(void) const {
	return this->_level;
}

std::string FragTrap::getName(void) const {
	return this->_name;
}

int FragTrap::getMeleeAttackDamage(void) const {
	return this->_meleeAttackDamage;
}

int FragTrap::getRangedAttackDamage(void) const {
	return this->_rangedAttackDamage;
}

int FragTrap::getArmorDamageReduction(void) const {
	return this->_armorDamageReduction;
}

int FragTrap::getPointsToAttack(void) const {
	return this->_pointToAttack;
}