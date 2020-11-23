/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 12:03:06 by qli           #+#    #+#                 */
/*   Updated: 2020/11/21 12:03:06 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main() {
	int N = -5;

	ZombieHorde zombieHorde(N);
	zombieHorde.announce();
	zombieHorde.releaseZombies();
	return 0;
}