/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 20:31:44 by qli           #+#    #+#                 */
/*   Updated: 2020/11/28 20:31:44 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	{
		FragTrap fragTrap("human");
		FragTrap fragTrap1 = fragTrap;

		fragTrap1.rangedAttack("unicorn");
		fragTrap1.meleeAttack("dog");
		fragTrap1.takeDamage(10);

		fragTrap1.beRepaired(10);
		fragTrap1.beRepaired(60);

		fragTrap1.vaulthunter_dot_exe("cat");
		fragTrap1.vaulthunter_dot_exe("fish");
		fragTrap1.vaulthunter_dot_exe("rabbit");
		fragTrap1.vaulthunter_dot_exe("dolphin");
		fragTrap1.vaulthunter_dot_exe("octopus");
	}
	std::cout << "------------------------------------------" << std::endl;
	{
		ScavTrap scavTrap("human2");
		ScavTrap scavTrap1 = scavTrap;

		scavTrap1.rangedAttack("unicorn");
		scavTrap1.meleeAttack("dog");
		scavTrap1.takeDamage(10);

		scavTrap1.beRepaired(10);
		scavTrap1.beRepaired(60);

		scavTrap1.challengeNewcomer();
		scavTrap1.challengeNewcomer();
		scavTrap1.challengeNewcomer();
	}
	return 0;
}
