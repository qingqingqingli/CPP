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
#include "Peon.hpp"
#include "MoreVictim.hpp"

int main(void){

{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
}
	std::cout << "----------------------------" << std::endl;
{
	Sorcerer sorcerer("sorcerer", "the Magnificent");
	Victim victim("victim");
	Peon peon("peon");
	MoreVictim more("more");

	victim.getPolymorphed();
	sorcerer.polymorph(victim);

	peon.polymorph();
	sorcerer.polymorph(peon);

	// test more derived class
	more.polymorph();
	sorcerer.polymorph(more);
}
	return 0;
}

// Robert, the Magnificent, is born!$
// Some random victim called Jimmy just appeared!$
// Some random victim called Joe just appeared!$
// Zog zog.$
// I am Robert, the Magnificent, and I like ponies!$
// I'm Jimmy and I like otters!$
// I'm Joe and I like otters!$
// Jimmy has been turned into a cute little sheep!$
// Joe has been turned into a pink pony!$
// Bleuark...$
// Victim Joe just died for no apparent reason!$
// Victim Jimmy just died for no apparent reason!$
// Robert, the Magnificent, is dead. Consequences will never be the same!$