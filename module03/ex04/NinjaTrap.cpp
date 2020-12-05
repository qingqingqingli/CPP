/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 17:16:43 by qli           #+#    #+#                 */
/*   Updated: 2020/12/04 17:16:43 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name) : _hitPoints(60), _maxHitPoints(60), _energyPoints(120), _maxEnergyPoints(120), _level(1), _name(name), _meleeAttackDamage(60), _rangedAttackDamage(5), _armorDamageReduction(0), _pointToAttack(10) {

	std::cout << BLUE << "<NinjaTrap> Default constructor has created [" << this->_name << "]." << RESET << std::endl;
}

NinjaTrap::~NinjaTrap() {

	std::cout << RED << "<NinjaTrap> Default destructor has destroyed [" << this->_name << "]." << RESET << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &src) {

	*this = src;
	std::cout << BLUE << "<NinjaTrap> Copy constructor has created [" << this->_name << "]." << RESET << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &rhs) {

	std::cout << BLUE << "<NinjaTrap> Assignation operator called." << RESET << std::endl;
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

void NinjaTrap::ninjaShoeBox(ClapTrap & clapTrap) {

	std::cout << CYAN << "<NinjaTrap> ninjaShoeBox with <ClapTrap> function called." << RESET << std::endl;
	clapTrap.takeDamage(20);
}

void NinjaTrap::ninjaShoeBox(FragTrap & fragTrap) {

	std::cout << CYAN << "<NinjaTrap> ninjaShoeBox with <FragTrap> function called." << RESET << std::endl;
	fragTrap.vaulthunter_dot_exe("horse");

}

void NinjaTrap::ninjaShoeBox(ScavTrap & scavtrap) {

	std::cout << CYAN << "<NinjaTrap> ninjaShoeBox with <ScavTrap> function called." << RESET << std::endl;
	scavtrap.challengeNewcomer();

}

void NinjaTrap::ninjaShoeBox(NinjaTrap & ninjaTrap) {

	std::cout << CYAN << "<NinjaTrap> ninjaShoeBox with <NinjaTrap> function called." << RESET << std::endl;
	std::cout << GREEN << "ninjaTrap is named [" << ninjaTrap._name << "]." << RESET << std::endl;
}

void NinjaTrap::meleeAttack(const std::string &target) {

	takeDamage(this->_meleeAttackDamage);
	if (this->_hitPoints > 0)
		std::cout << CYAN << "<NinjaTrap> Hyah! FR4G-TP [" << this->_name << "] attacks [" << target << "] at melee, causing [" << this->_meleeAttackDamage << "] points of damage! [" << this->_name << "] currently has [" << this->_hitPoints << "] hit points." << RESET << std::endl;
}

void NinjaTrap::takeDamage(unsigned int amount) {

	this->_hitPoints = this->_hitPoints + this->_armorDamageReduction - amount ;
	if (this->_hitPoints <= 0){
		this->_level = 0;
		std::cout << RED << "<NinjaTrap> [" << this->_name << "] has taken too much damage and degraded to level 0. It means that [" << this->_name << "] has died." << RESET << std::endl;
	}
	else{
		std::cout << GREEN << "<NinjaTrap> Extra ouch! Attack happened! You're taking [" << amount << "] points damage. Your armor reduced [" << this->_armorDamageReduction << "] points." << RESET << std::endl;
	}
}

void NinjaTrap::print_all_value(void) {
	std::cout << CYAN << "<NinjaTrap> Hit Points =  [" << this->_hitPoints << "]." << RESET << std::endl;
	std::cout << CYAN << "<NinjaTrap> Max Hit Points =  [" << this->_maxHitPoints << "]." << RESET << std::endl;
	std::cout << CYAN << "<NinjaTrap> Energy Points =  [" << this->_energyPoints << "]." << RESET << std::endl;
	std::cout << CYAN << "<NinjaTrap> Melee Attack Damage =  [" << this->_meleeAttackDamage << "]." << RESET << std::endl;
	std::cout << CYAN << "<NinjaTrap> Ranged Attack Damage =  [" << this->_rangedAttackDamage << "]." << RESET << std::endl;
	std::cout << CYAN << "<NinjaTrap> Armor Damage Reduction =  [" << this->_armorDamageReduction << "]." << RESET << std::endl;
}