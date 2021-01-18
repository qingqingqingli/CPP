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

SuperMutant::SuperMutant(const SuperMutant &src) : Enemy(src){
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
	Enemy::takeDamage(damage - 3);
}
