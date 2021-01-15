/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:22:35 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:22:35 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
	std::cout << GREEN << "Gaaah. Me want smash heads!" << RESET << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << RED << "Aaargh..." << RESET << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &src) : Enemy(){
	std::cout << YELLOW << "<SuperMutant> Copy constructor is called." << RESET << std::endl;
	*this = src;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &rhs) {
	std::cout << YELLOW << "<SuperMutant> Assignation operator is called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}

void SuperMutant::takeDamage(int damage) {
	if (damage < 0){
		std::cout << RED << "damage cannot be negative." << RESET << std::endl;
		return ;
	}
	// SuperMutant takes 3 less damage than usual Enemy
	if (this->getHP() - damage + 3 < 0)
		this->_hp = 0;
	else
		this->_hp = this->getHP() - damage + 3;
}
