/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 16:54:09 by qli           #+#    #+#                 */
/*   Updated: 2020/12/08 16:15:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main() {
	{
		ClapTrap clapTrap("clap");
		ClapTrap clapTrap1 = clapTrap;

		clapTrap1.rangedAttack("unicorn");
		clapTrap1.meleeAttack("dog");
		clapTrap1.takeDamage(10);

		clapTrap1.beRepaired(10);
		clapTrap1.beRepaired(60);
	}
	std::cout << "------------------------------------------" << std::endl;
	{
		FragTrap fragTrap("frag");
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
		ScavTrap scavTrap("scav");
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


