//
// Created by qli on 30/11/2020.
//

#ifndef INHERITANCE1_ANIMAL_H
#define INHERITANCE1_ANIMAL_H
#include <string>

// PUBLIC
class Animal {
private:
	int _numberOfLegs;

public:
	Animal();
	Animal(Animal const &);
	Animal& operator=(Animal const &);
	~Animal();

	void run(int distance);
	void call();
	void eat(std::string const & what);
	void walk(int distance);
};

// It means that Cat is an animal
class Cat : public Animal {

public:
	Cat();
	Cat(Cat const &);
	Cat& operator=(Cat const &);
	~Cat();

	void scornSomeone(std::string const & target);

};

class Pony : public Animal {

public:
	Pony();
	Pony(Pony const &);
	Pony& operator=(Pony const &);
	~Pony();

	void doMagic(std::string const & target);
	void run(int distance); // it will replace the animal function
};

// PROTECTED

class Quadruped { // Can access name, run() and legs

private:
	std::string name; // Only accessible from an Quadruped object

protected:
	Leg legs[4]; // Accessible from an Quadruped or derived object

public:
	void run(); // Accessible from wherever
};

#endif //INHERITANCE1_ANIMAL_H
