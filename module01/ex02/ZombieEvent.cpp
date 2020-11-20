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

void ZombieEvent::setZombieType(Zombie* zombie, const std::string &newType) {

	zombie->setType(newType);
	std::cout << zombie->getName() << " is set to type " << zombie->getType() << " ." << std::endl;
}

Zombie *ZombieEvent::newZombie(std::string name) {

	Zombie* newZombie = new Zombie(name, "elder");

	return newZombie;
}

ZombieEvent::ZombieEvent() {
	std::cout << "zombieEvent constructor is called." << std::endl;
}

ZombieEvent::~ZombieEvent() {
	std::cout << "zombieEvent destructor is called." << std::endl;
}
