/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 20:32:58 by qli           #+#    #+#                 */
/*   Updated: 2020/11/28 20:32:58 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int	main() {

	ScavTrap scavTrap("human2");
	ScavTrap scavTrap1 = scavTrap;

	std::cout << "------------------------------------------" << std::endl;
	scavTrap1.rangedAttack("dog");
	scavTrap1.meleeAttack("cat");

	std::cout << "------------------------------------------" << std::endl;
	scavTrap1.beRepaired(30);
	scavTrap1.beRepaired(30);
	scavTrap1.beRepaired(30);

	std::cout << "------------------------------------------" << std::endl;
	scavTrap1.challengeNewcomer();
	scavTrap1.challengeNewcomer();

	std::cout << "------------------------------------------" << std::endl;
	return 0;
}

