/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 21:04:15 by qli           #+#    #+#                 */
/*   Updated: 2020/11/19 21:04:15 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// give enough proof that things work
// make newly created zombies announce themselves

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent zombieEvent;

	Zombie::randomChump();
	Zombie* zombie4 = zombieEvent.newZombie("hello");
	zombieEvent.setZombieType(zombie4, "elder");
	return 0;
}