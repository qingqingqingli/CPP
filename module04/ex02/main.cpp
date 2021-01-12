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
//    Squad* original_squad = new Squad;
//    ISpaceMarine* bob = new TacticalMarine;
//    ISpaceMarine* jim = new AssaultTerminator;
//
//    original_squad->push(bob);
//    original_squad->push(jim);
//
//	//Second test the copy constructor
//	Squad* copied_squad = new Squad(*original_squad);
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
//	delete original_squad;
//	delete copied_squad;
//    return 0;
//}

int main()
{
    //First we create a simple squad
    Squad* original_squad = new Squad;
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    original_squad->push(bob);
    original_squad->push(jim);

    //Second test the copy constructor
    Squad* copied_squad = new Squad(*original_squad);
    ISpaceMarine* jerry = new TacticalMarine;
    ISpaceMarine* jon = new AssaultTerminator;

    copied_squad->push(jerry);
    copied_squad->push(jon);

//    //Third assign the first simple squad to the copied squad
//	std::cout << "---------------" << std::endl;
//    *copied_squad = *original_squad;
//
//    for (int i = 0; i < original_squad->getCount(); ++i)
//	{
//		ISpaceMarine* cur = original_squad->getUnit(i);
//		cur->battleCry();
//		cur->rangedAttack();
//		cur->meleeAttack();
//	}
//	std::cout << "0---------------" << std::endl;
//	for (int i = 0; i < copied_squad->getCount(); ++i)
//	{
//		ISpaceMarine* cur = copied_squad->getUnit(i);
//		cur->battleCry();
//		cur->rangedAttack();
//		cur->meleeAttack();
//	}
    //delete the squads and their content
	std::cout << "1---------------" << std::endl;
	delete original_squad;
	std::cout << "2---------------" << std::endl;
	delete copied_squad;
	std::cout << "3---------------" << std::endl;

    return 0;
}

//int main(void)
//{
//	ISpaceMarine* bob = new TacticalMarine;
//	ISpaceMarine* jim = new AssaultTerminator;
//
//	Squad* vlc = new Squad;
//	vlc->push(bob);
//	vlc->push(jim);
//
//	std::cout << YELLOW << "vlc unit number: " << vlc->getCount() << RESET << std::endl << std::endl;
//
//	//test copy constructor
//	std::cout << BLUE << "--COPY CONSTRUCTOR ---" << RESET << std::endl;
//	Squad* vlcCopy = new Squad(*vlc);
//
//	ISpaceMarine* clone = jim->clone();
//	vlcCopy->push(clone);
//
//	std::cout << YELLOW << "unit number: " << vlcCopy->getCount() << RESET << std::endl << std::endl;
//
//	//test assignation operator
//	std::cout << BLUE << "--ASSIGNATION OPERATOR ---" << RESET << std::endl;
//	*vlcCopy = *vlc;
//
//	ISpaceMarine* tom = new AssaultTerminator;
//	ISpaceMarine* tom2 = new AssaultTerminator;
//
//	vlcCopy->push(tom);
//	vlcCopy->push(tom2);
//
//	std::cout << YELLOW << "vlcCopy unit number: " << vlcCopy->getCount() << RESET << std::endl;
//	std::cout << YELLOW << "vlc unit number: " << vlc->getCount() << RESET << std::endl << std::endl;
//
//	//delete squads
//	delete vlc;
//	delete vlcCopy;
//
//	return 0;
//}

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