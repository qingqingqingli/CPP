/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 17:16:07 by qli           #+#    #+#                 */
/*   Updated: 2020/12/04 17:16:07 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void){
	ClapTrap 	clapTrap("clap");
	FragTrap 	fragTrap("frag");
	ScavTrap 	scavTrap("scav");
	NinjaTrap 	ninjaTrap("ninja");

	std::cout << "------------------------------------------" << std::endl;

	ninjaTrap.print_all_value();

	std::cout << "------------------------------------------" << std::endl;

	ninjaTrap.ninjaShoeBox(clapTrap);
	ninjaTrap.ninjaShoeBox(fragTrap);
	ninjaTrap.ninjaShoeBox(scavTrap);
	ninjaTrap.ninjaShoeBox(ninjaTrap);

	std::cout << "------------------------------------------" << std::endl;

	ninjaTrap.rangedAttack("cat");
	ninjaTrap.meleeAttack("Dog");

	std::cout << "------------------------------------------" << std::endl;
	return 0;
}
