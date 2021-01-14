/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:28:15 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:28:15 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

int main(void)
{
	{
		Character* me = new Character("me");

		std::cout << *me;

		Enemy* b = new RadScorpion();

		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();

		me->equip(pr);
		std::cout << *me;
		me->equip(pf);
		me->attack(b);

		std::cout << *me;
		me->equip(pr);
		std::cout << *me;

		me->attack(b);
		std::cout << *me;

		me->attack(b);
		std::cout << *me;

		std::cout << "-------------------------------" << std::endl;

		delete me;
		delete pr;
		delete pf;
		if (b != 0)
			delete b;
	}

		std::cout << "-------------------------------" << std::endl;

	{
		Character* you = new Character("you");
		Enemy* enemy = new SuperMutant();
		AWeapon* weapon = new PowerFist();

		you->attack(enemy);
		you->equip(weapon);
		you->attack(enemy);

		delete you;
		delete enemy;
		delete weapon;
	}

	return 0;
}

// me has 40 AP and is unarmed$
// * click click click *$
// me has 40 AP and wields a Plasma Rifle$
// me attacks RadScorpion with a Power Fist$
// * pschhh... SBAM! *$
// me has 32 AP and wields a Power Fist$
// me has 32 AP and wields a Plasma Rifle$
// me attacks RadScorpion with a Plasma Rifle$
// * piouuu piouuu piouuu *$
// me has 27 AP and wields a Plasma Rifle$
// me attacks RadScorpion with a Plasma Rifle$
// * piouuu piouuu piouuu *$
// * SPROTCH *$
// me has 22 AP and wields a Plasma Rifle$