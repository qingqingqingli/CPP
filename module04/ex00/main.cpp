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

int main(void){
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");

	std::cout << robert << std::endl;
	std::cout << jim << std::endl;

	std::cout << robert << jim << std::endl;

//	Peon joe("Joe");

//	std::cout << robert << jim << joe;
//	robert.polymorph(jim);
//	robert.polymorph(joe);

	return 0;
}