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

	std::cout << BLUE << "<ClapTrap> Default constructor has created [" << this->getName() << "]." << RESET << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << RED << "<ClapTrap> Default destructor has destroyed [" << this->getName()  << "]." << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {

	*this = src;
	std::cout << BLUE << "<ClapTrap> Copy constructor has created [" << this->getName()  << "]." << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {

	std::cout << BLUE << "<ClapTrap> Assignation operator called." << RESET << std::endl;
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

void ClapTrap::rangedAttack(const std::string &target) {

	takeDamage(this->getRangedAttackDamage());
	if (this->getHitPoints() > 0)
		std::cout << CYAN << "<ClapTrap> Badass! FR4G-TP [" << this->getName() << "] attacks [" << target << "] at range, causing [" << this->getRangedAttackDamage() - this->getArmorDamageReduction() << "] points of damage! [" << this->getName() << "] currently has [" << this->getHitPoints() << "] hit points." << RESET << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target) {

	takeDamage(this->getMeleeAttackDamage());
	if (this->getHitPoints() > 0)
		std::cout << CYAN << "<ClapTrap> Hyah! FR4G-TP [" << this->getName() << "] attacks [" << target << "] at melee, causing [" << this->getMeleeAttackDamage() - this->getArmorDamageReduction() << "] points of damage! [" << this->getName() << "] currently has [" << this->getHitPoints() << "] hit points." << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {

	this->_hitPoints = this->getHitPoints() + this->getArmorDamageReduction() - amount ;
	if (this->getHitPoints() <= 0){
		this->_level = 0;
		std::cout << RED << "<ClapTrap> [" << this->getName() << "] has taken too much damage and degraded to level 0. It means that [" << this->getName() << "] has died." << RESET << std::endl;
	}
	else{
		std::cout << GREEN << "<ClapTrap> Extra ouch! Attack happened! You're taking [" << amount << "] points damage. Your armor reduced [" << this->getArmorDamageReduction() << "] points." << RESET << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {

	this->_hitPoints += amount;
	if (this->getHitPoints() > this->getMaxHitPoints()){
		this->_hitPoints = this->getMaxHitPoints();
		std::cout << MAGENTA << "<ClapTrap> HP is charged to [" << this->getMaxHitPoints() << "] points. " << RESET << std::endl;
	}
	else{
		std::cout << MAGENTA << "<ClapTrap> HP have been repaired and added [" << amount << "] points. Your current HP is [" << this->getHitPoints() << "] points." << RESET << std::endl;
	}
}

void ClapTrap::print_all_value(void) {
	std::cout << MAGENTA << "Hit Points =  [" << this->getHitPoints() << "]." << RESET << std::endl;
	std::cout << MAGENTA << "Max Hit Points =  [" << this->getMaxHitPoints() << "]." << RESET << std::endl;
	std::cout << MAGENTA << "Energy Points =  [" << this->getEnergyPoints() << "]." << RESET << std::endl;
	std::cout << MAGENTA << "Max Energy Points =  [" << this->getMaxEnergyPoints() << "]." << RESET << std::endl;
	std::cout << MAGENTA << "Level =  [" << this->getLevel() << "]." << RESET << std::endl;
	std::cout << MAGENTA << "Melee Attack Damage =  [" << this->getMeleeAttackDamage() << "]." << RESET << std::endl;
	std::cout << MAGENTA << "Ranged Attack Damage =  [" << this->getRangedAttackDamage() << "]." << RESET << std::endl;
	std::cout << MAGENTA << "Armor Damage Reduction =  [" << this->getArmorDamageReduction() << "]." << RESET << std::endl;
}

int ClapTrap::getHitPoints(void) const {
	return this->_hitPoints;
}

int ClapTrap::getMaxHitPoints(void) const {
	return this->_maxHitPoints;
}

int ClapTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

int ClapTrap::getMaxEnergyPoints(void) const {
	return this->_maxEnergyPoints;
}

int ClapTrap::getLevel(void) const {
	return this->_level;
}

std::string ClapTrap::getName(void) const {
	return this->_name;
}

int ClapTrap::getMeleeAttackDamage(void) const {
	return this->_meleeAttackDamage;
}

int ClapTrap::getRangedAttackDamage(void) const {
	return this->_rangedAttackDamage;
}

int ClapTrap::getArmorDamageReduction(void) const {
	return this->_armorDamageReduction;
}

int ClapTrap::getPointsToAttack(void) const {
	return this->_pointToAttack;
}