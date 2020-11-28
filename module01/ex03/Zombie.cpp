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

std::string Zombie::_type = "not set";

Zombie::Zombie() {

	std::cout << GREEN << "[zombie] constructor called." << RESET << std::endl;
}

Zombie::~Zombie() {

	std::cout << RED << "[zombie] destructor called." << RESET << std::endl;
}

void Zombie::announce() {

	std::cout << BOLDYELLOW << "<" << this->getName() << " (" << Zombie::getType() << ")> is here..." << RESET << std::endl;
}

void Zombie::setName(const std::string &name) {

	this->_name = name;
}

std::string Zombie::getName() {

	return this->_name;
}

void Zombie::setType(const std::string &type) {

	Zombie::_type = type;
}

std::string Zombie::getType() {

	return Zombie::_type;
}

void Zombie::randomChump() {

	srand(time(NULL));
	int ret = rand() % 10;

	if (ret >= 0 && ret <= 3){
		Zombie zombie1;
		zombie1.setName("small zombie");
		zombie1.announce();
	}
	else if (ret >=4 && ret <= 7){
		Zombie zombie2;
		zombie2.setName("medium zombie");
		zombie2.announce();
	}
	else{
		Zombie zombie3;
		zombie3.setName("big zombie");
		zombie3.announce();
	}
}
