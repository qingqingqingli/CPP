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

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent::setZombieType("baby");
	Zombie* newZombie = ZombieEvent::newZombie("new zombie");
	newZombie->announce();
	Zombie::randomChump();

	delete newZombie;
	return 0;
}