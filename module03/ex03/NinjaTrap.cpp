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

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name){

	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	this->_pointToAttack = 0;
	std::cout << BLUE << "<NinjaTrap> Default constructor has created [" << this->getName() << "]." << RESET << std::endl;
}

NinjaTrap::~NinjaTrap() {

	std::cout << RED << "<NinjaTrap> Default destructor has destroyed [" << this->getName() << "]." << RESET << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &src) : ClapTrap(src._name){

	*this = src;
	std::cout << BLUE << "<NinjaTrap> Copy constructor has created [" << this->getName() << "]." << RESET << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &rhs) {

	std::cout << BLUE << "<NinjaTrap> Assignation operator called." << RESET << std::endl;
	if (this != &rhs) {
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
	std::cout << GREEN << "ninjaTrap is named [" << ninjaTrap.getName() << "]." << RESET << std::endl;
}
