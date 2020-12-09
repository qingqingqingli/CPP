/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 13:48:41 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 13:48:41 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

int main(void) {

	Sorcerer sorcerer("dragon", "master");
	Sorcerer sorcerer1 = sorcerer;

	sorcerer1.announce();

	std::cout << "------------------------------------------" << std::endl;

	Victim victim("poor cat");
	Victim victim1 = victim;

	victim1.announce();

	std::cout << "------------------------------------------" << std::endl;

	return 0;
}
