
#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << "---------" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		Character* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		Character* bob = new Character("bob");

		//test copy constructor & assignation operator
		Character *meCopy = new Character(*me);
		std::cout << "----" << std::endl;
		Character *bobCopy = new Character(*bob);
		std::cout << "----" << std::endl;

		me->use(0, *bob);
		me->use(1, *bob);

		std::cout << "----" << std::endl;
		meCopy->use(0, *bobCopy);
		meCopy->use(1, *bobCopy);

		//test unequip
		std::cout << "----" << std::endl;

		AMateria *materiaCopy = meCopy->getMateria(1);
		meCopy->unequip(1);

		meCopy->use(0, *bobCopy);
		meCopy->use(1, *bobCopy);
		me->use(0, *bob);
		me->use(1, *bob);

		delete src;
		delete bob;
		delete bobCopy;
		delete me;
		delete meCopy;
		delete materiaCopy;
	}
	return 0;
}

// // <first part>

//* shoots an ice bolt at bob *
//* heals bob's wounds *

// // <second part>

//Character copy constructor
//Character assignation operator
//Ice copy constructor
//Ice assignation operator
//Cure copy constructor
//Cure assignation operator
//----
//Character copy constructor
//Character assignation operator
//----
//* shoots an ice bolt at bob *
//* heals bob's wounds *
//----
//* shoots an ice bolt at bob *
//* heals bob's wounds *
//----
//Materia 1 unequipped.
//* shoots an ice bolt at bob *
//invalid materia to use.
//* shoots an ice bolt at bob *
//* heals bob's wounds *