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
#include <cstdlib>
#include "FragTrap.hpp"

int	main() {
	FragTrap fragTrap("human");
	FragTrap fragTrap1 = fragTrap;

	std::cout << "------------------------------------------" << std::endl;
	fragTrap1.rangedAttack("unicorn");
	fragTrap1.meleeAttack("dog");

	std::cout << "------------------------------------------" << std::endl;
	fragTrap1.beRepaired(40);
	fragTrap1.beRepaired(40);

	std::cout << "------------------------------------------" << std::endl;
	fragTrap1.vaulthunter_dot_exe("cat");
	fragTrap1.vaulthunter_dot_exe("fish");
	fragTrap1.vaulthunter_dot_exe("rabbit");
	fragTrap1.vaulthunter_dot_exe("dolphin");
	fragTrap1.vaulthunter_dot_exe("octopus");

	std::cout << "------------------------------------------" << std::endl;
	return 0;
}
