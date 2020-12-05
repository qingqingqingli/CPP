/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/05 17:34:49 by qli           #+#    #+#                 */
/*   Updated: 2020/12/05 17:34:49 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

int main(void) {
	SuperTrap superTrap("super");
	superTrap.print_all_value();
	superTrap.rangedAttack("cat");
	superTrap.meleeAttack("dog");

	std::cout << "------------------------------------------" << std::endl;

	FragTrap fragTrap("frag");
	fragTrap.print_all_value();

	std::cout << "------------------------------------------" << std::endl;

	NinjaTrap ninjaTrap("ninja");
	ninjaTrap.print_all_value();

	return 0;
}
