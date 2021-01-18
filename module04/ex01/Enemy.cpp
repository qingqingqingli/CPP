/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:22:52 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:22:52 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type) : _hp(hp), _type(type){
	return;
}

Enemy::~Enemy() {
}

Enemy &Enemy::operator=(const Enemy &rhs) {
	std::cout << YELLOW << "<Enemy> Assignation operator is called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getHP();
	}
	return *this;
}

Enemy::Enemy(const Enemy &src) {
	std::cout << YELLOW << "<Enemy> Copy constructor is called." << RESET << std::endl;
	*this = src;
}

std::string Enemy::getType() const {
	return this->_type;
}

int Enemy::getHP() const {
	return this->_hp;
}

void Enemy::takeDamage(int damage) {
	if (damage < 0)
	{
		std::cout << RED << "damage cannot be negative." << RESET << std::endl;
		return ;
	}
	if (this->getHP() - damage < 0)
		this->_hp = 0;
	else
		this->_hp = this->getHP() - damage;
}