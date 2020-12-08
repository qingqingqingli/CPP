## Table of contents
- []()

### Sub-typing polymorphism

- A virtual member function (or called method), where the definition is dynamic and will be done during the resolution.

> Example without virtual member function

```C++
#include <string>
#include <iostream>

class Character
{
public:
void sayHello(std::string const & target);
};

// function overriding
class Warrior: public Character
{
public:
void sayHello(std::string const & target);
};

class Cat
{
//[...]
};

void Character::sayHello(const std::string &target) {
std::cout << "Hello " << target << "!" << std::endl;
}

void Warrior::sayHello(const std::string &target) {
std::cout << "Go away " << target << ", I don't like you!" << std::endl;
}

int main(void)
{
// Warrior is a Warrior
Warrior* a = new Warrior();

// Warrior is a character
Character* b = new Warrior();

// This is not OKAY. Character IS NOT a Warrior
// Warrior* c = new Character();

// This is also not okay. Cat IS NOT a character
// Character c = new Cat();

a->sayHello("students");
b->sayHello("students");

delete a;
delete b;

return 0;
}
```

> Result
```shell
Go away students, I don't like you!
Hello students!
```

> Example with virtual member functions

```C++
#include <string>
#include <iostream>

// with virtual, the definition of the function call will be dynamic
// it will be decided during the compilation
class Character
{
public:
	virtual void sayHello(std::string const & target);
};

// function overriding
class Warrior : public Character
{
public:
	virtual void sayHello(std::string const & target);
};

class Cat
{
	//[...]
};

void Character::sayHello(const std::string &target) {
	std::cout << "Hello " << target << "!" << std::endl;
}

void Warrior::sayHello(const std::string &target) {
	std::cout << "Go away " << target << ", I don't like you!" << std::endl;
}

int main(void)
{
	// Warrior is a Warrior
	Warrior* a = new Warrior();

	// Warrior is a character
	Character* b = new Warrior();

	// This is not OKAY. Character IS NOT a Warrior
	// Warrior* c = new Character();

	// This is also not okay. Cat IS NOT a character
	// Character c = new Cat();

	a->sayHello("students");
	b->sayHello("students");

	return 0;
}
```

> Result

```Shell
Go away students, I don't like you!
Go away students, I don't like you!
```

### abstract classes

- An abstract class means some behaviours are abstract and some are not. The abstract class itself cannot be instantiated

> Example of abstract class and interface

```C++
#include <string>
#include <iostream>

// abstract class with a pure method that does not exist
// when a class inherits this class, it needs to implement the function
// it requires all the children classes to have the attack behaviour,
// even if the mother class does not have it
class ACharacter
{
	// abstract class can have attributes
	// but only Warrior are able to instantiate it
private:
	std::string name;
public:
	virtual void attack(std::string const & target) = 0;
	void sayHello(std::string const & target);
};

class Warrior : public ACharacter
{
public:
	virtual void attack(std::string const & target);
};

void ACharacter::sayHello(const std::string &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::attack(const std::string &target)
{
	std::cout << "*attacks " << target << "with a sword" << std::endl;
}

// abstract only. It is an interface. interface can't have attributes
// it will force all objects inheriting from this class to have certain behaviours
// it's very useful when you develop with other people
// other people can do whatever they want with these functions, but they know how you will use them
//class ICoffeeMaker
//{
//public:
//	virtual void fillWatertank(IWaterSource * src) = 0;
//	virtual Icoffee* makeCoffee(std::string const & type) = 0;
//};

int main()
{
	ACharacter* a = new Warrior();

	// This does not work because ACharacter is abstract
	// ACharacter* b = new ACharacter();

	a->sayHello("students");
	a->attack("roger");
	
	return 0;
}
```