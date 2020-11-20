/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 20:52:57 by qli           #+#    #+#                 */
/*   Updated: 2020/11/19 20:52:57 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Zombie.hpp"

void Zombie::announce() {

	std::cout << "<" << this->getName() << " (" << this->getType() << ")> announced itself..." << std::endl;
}

std::string Zombie::getName() {
	return this->_name;
}

std::string Zombie::getType() {
	return this->_type;
}

Zombie::Zombie(const std::string &name, const std::string &type) : _name(name), _type(type){
	std::cout << "constructor called." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "destructor called." << std::endl;
}

// need to improve the randomisation of zombies
void Zombie::randomChump() {

	srand(time(NULL));
	int ret = rand() % 10;

	if (ret >= 0 && ret <= 3){
		Zombie zombie1("zombie1", "baby");
		zombie1.announce();
	}
	else if (ret >=4 && ret <= 7){
		Zombie zombie2("zombie2", "teenager");
		zombie2.announce();
	}
	else{
		Zombie zombie3("zombie3", "elder");
		zombie3.announce();
	}
}

void Zombie::setType(const std::string &type) {

	this->_type = type;
}
