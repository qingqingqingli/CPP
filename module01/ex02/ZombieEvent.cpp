/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 20:52:50 by qli           #+#    #+#                 */
/*   Updated: 2020/11/19 20:52:50 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(const std::string &newType) {

	Zombie::setType(newType);

	std::cout << " Zombie type is set to " << Zombie::getType() << " ." << std::endl;
}

Zombie *ZombieEvent::newZombie(const std::string &name) {

	Zombie* newZombie = new Zombie;

	newZombie->setName(name);
	return newZombie;
}

ZombieEvent::ZombieEvent() {

	std::cout << GREEN << "[zombieEvent] constructor is called." << RESET << std::endl;
}

ZombieEvent::~ZombieEvent() {

	std::cout << RED << "[zombieEvent] destructor is called." << RESET << std::endl;
}
