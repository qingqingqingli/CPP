/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 12:03:12 by qli           #+#    #+#                 */
/*   Updated: 2020/11/21 12:03:12 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int	ZombieHorde::_zombieNb = 0;

ZombieHorde::ZombieHorde(int N) {

	if (N > 0){
		_zombieArray = new Zombie[N];
		ZombieHorde::_zombieNb = N;
		Zombie::setType("teenager");
		ZombieHorde::randomName();
		std::cout << GREEN << N << " zombies have been created." << RESET << std::endl;
	}
	else
		std::cout << RED << "No zombies are created because N is invalid." << RESET << std::endl;
}

ZombieHorde::~ZombieHorde() {

	std::cout << RED << "[ZombieHorde] destructor is called." << RESET << std::endl;
}

void ZombieHorde::randomName() {

	int i = 0;
	if (ZombieHorde::_zombieNb > 0) {
		srand(time(NULL));
		while (i < ZombieHorde::_zombieNb) {
			int ret = rand() % 10;
			if (ret >= 0 && ret <= 3)
				_zombieArray[i].setName("small zombie");
			else if (ret >=4 && ret <= 6)
				_zombieArray[i].setName("medium zombie");
			else
				_zombieArray[i].setName("big zombie");
			i++;
		}
	}
}

void ZombieHorde::announce() {

	int	i = 0;
	while (i < ZombieHorde::_zombieNb) {
		_zombieArray[i].announce();
		i++;
	}
}

void ZombieHorde::releaseZombies() {

	if (ZombieHorde::_zombieNb > 0)
		delete [] _zombieArray;
}
