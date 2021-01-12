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

//int main(void)
//{
//	ISpaceMarine* bob = new TacticalMarine;
//	ISpaceMarine* jim = new AssaultTerminator;
//
//	ISquad* vlc = new Squad;
//	vlc->push(bob);
//	vlc->push(jim);
//	for (int i = 0; i < vlc->getCount(); ++i)
//	{
//		ISpaceMarine* cur = vlc->getUnit(i);
//		cur->battleCry();
//		cur->rangedAttack();
//		cur->meleeAttack();
//	}
//	delete vlc;
//
//	return 0;
//}

//int main()
//{
//    //First we create a simple squad
//    ISquad* original_squad = new Squad;
//    ISpaceMarine* bob = new TacticalMarine;
//    ISpaceMarine* jim = new AssaultTerminator;
//
//    std::cout << "------------" << std::endl;
//    original_squad->push(bob);
//    original_squad->push(jim);
//
//
//	//Second test the copy constructor
//	ISquad* copied_squad = new Squad(*original_squad);
//	ISpaceMarine* jerry = new TacticalMarine;
//	ISpaceMarine* jon = new AssaultTerminator;
//
//	copied_squad->push(jerry);
//	copied_squad->push(jon);
//
//    //Third assign the first simple squad to the copied squad
//    *copied_squad = *original_squad;
//
//    //delete the squads and their content
//	std::cout << RED << "------------" << RESET << std::endl;
//	delete original_squad;
//	std::cout << "------------" << std::endl;
//	delete copied_squad;
//    return 0;
//}

int main(void)
{
	std::cout << "--ORIGINAL 2 units---" << std::endl;

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* clone = jim->clone();

	Squad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(clone);

	std::cout << YELLOW << "unit number: " << vlc->getCount() << RESET << std::endl;

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "--COPY CONSTRUCTOR 3 units ---" << std::endl;

	Squad* vlcCopy = new Squad(*vlc);

	std::cout << vlcCopy->push(clone) << std::endl;

	std::cout << YELLOW << "unit number: " << vlcCopy->getCount() << RESET << std::endl;

	for (int i = 0; i < vlcCopy->getCount(); ++i)
	{
		ISpaceMarine* cur = vlcCopy->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "--ASSIGNATION OPERATION 2 units ---" << std::endl;

	*vlcCopy = *vlc;
	ISpaceMarine* tom = new AssaultTerminator;
	ISpaceMarine* tom2 = new AssaultTerminator;

	vlc->push(tom);
	vlc->push(tom2);

	std::cout << YELLOW << "unit number: " << vlcCopy->getCount() << RESET << std::endl;

	std::cout << YELLOW << "unit number: " << vlc->getCount() << RESET << std::endl;

	for (int i = 0; i < vlcCopy->getCount(); ++i)
	{
		ISpaceMarine* cur = vlcCopy->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	delete vlc;
	delete vlcCopy;

	return 0;
}

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