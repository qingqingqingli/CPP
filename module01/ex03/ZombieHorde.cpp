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

	int i = 0;
	if (N > 0){
		_zombieArray = new Zombie[N];
		ZombieHorde::_zombieNb = N;
		Zombie::setType("teenager");
		while (i < N){
			ZombieHorde::randomName(&_zombieArray[i]);
			i++;
		}
		std::cout << GREEN << N << " zombies have been created." << RESET << std::endl;
	}
	else
		std::cout << RED << "No zombies are created because N is invalid. ." << RESET << std::endl;
}

ZombieHorde::~ZombieHorde() {
	std::cout << RED << "[ZombieHorde] destructor is called." << RESET << std::endl;
}

void ZombieHorde::randomName(Zombie* zombie) {

	srand(time(NULL));
	int ret = rand() % 10;

	if (ret >= 0 && ret <= 3)
		zombie->setName("small zombie");
	else if (ret >=4 && ret <= 7)
		zombie->setName("medium zombie");
	else
		zombie->setName("big zombie");
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
