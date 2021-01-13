/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:39:04 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:39:04 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main(void)
{
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;

		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	std::cout << "---------" << std::endl;
	{
		// create one squad
		Squad* original_squad = new Squad;
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;

		original_squad->push(bob);
		original_squad->push(jim);

		// test copy constructor
		Squad* copied_squad = new Squad(*original_squad);
		ISpaceMarine* jerry = new TacticalMarine;
		ISpaceMarine* jon = new AssaultTerminator;

		copied_squad->push(jerry);
		copied_squad->push(jon);

		std::cout << BLUE << "original squad has: " << original_squad->getCount() << " units." << std::endl;
		std::cout << "copied squad has: " << copied_squad->getCount() << " units." << RESET << std::endl;

		//test assignation operator
		std::cout << "---" << std::endl;
		*copied_squad = *original_squad;

		std::cout << BLUE << "original squad has: " << original_squad->getCount() << " units." << std::endl;
		std::cout << "copied squad has: " << copied_squad->getCount() << " units." << RESET << std::endl;

		//delete the squads and their content
		std::cout << "---" << std::endl;
		delete original_squad;
		delete copied_squad;
	}
	return 0;
}


// // <first part>

// Tactical Marine ready for battle!$
// * teleports from space *$
// For the holy PLOT!$
// * attacks with a bolter *$
// * attacks with a chainsword *$
// This code is unclean. PURIFY IT!$
// * does nothing *$
// * attacks with chainfists *$
// Aaargh...$
// I'll be back...$

// // <second part>

//Tactical Marine ready for battle!
//* teleports from space *
//Squad copy constructor called
//Squad assignation called
//Tactical Marine ready for battle!
//* teleports from space *
//original squad has: 2 units.
//copied squad has: 4 units.
//---
//Squad assignation called
//Aaargh...
//I'll be back...
//Aaargh...
//I'll be back...
//original squad has: 2 units.
//copied squad has: 2 units.
//---
//Aaargh...
//I'll be back...
//Aaargh...
//I'll be back...