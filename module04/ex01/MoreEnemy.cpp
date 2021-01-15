/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MoreEnemy.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 10:50:31 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 10:50:31 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "MoreEnemy.hpp"
#include "Enemy.hpp"

MoreEnemy::MoreEnemy() : Enemy(170, "More Enemy"){
	std::cout << GREEN << "More Enemy is born!" << RESET << std::endl;
}

MoreEnemy::~MoreEnemy() {
	std::cout << RED << "More Enemy is destroyed..." << RESET << std::endl;
}

MoreEnemy::MoreEnemy(const MoreEnemy &src) : Enemy(){
	std::cout << YELLOW << "<MoreEnemy> Copy constructor is called." << RESET << std::endl;
	*this = src;
}

MoreEnemy &MoreEnemy::operator=(const MoreEnemy &rhs) {
	std::cout << YELLOW << "<MoreEnemy> Assignation operator is called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}

void MoreEnemy::takeDamage(int damage) {
	if (damage < 0){
		std::cout << RED << "damage cannot be negative." << RESET << std::endl;
		return ;
	}
	if (this->getHP() - damage < 0)
		this->_hp = 0;
	this->_hp = this->getHP() - damage;
}

