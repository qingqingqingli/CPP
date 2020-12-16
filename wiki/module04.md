## Table of contents
- [Sub-typing polymorphism]()
- [abstract classes]()
- [Polymorphism]()

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

### Polymorphism (多态)

- The word means having many forms. It is the ability of a message(function / operator) to be displayed in more than one form. In C++, an operator or function can be given different meanings or functions.

- In C++, polymorphism is mainly divided into two types:
    - Compile time polymorphism (early binding / static polymorphism) - static in nature
    - Runtime polymorphism (late binding / dynamic polymorphism)
      
[![polymorphism](https://github.com/qingqingqingli/CPP/blob/main/images/polymorphism.png)](https://github.com/qingqingqingli/CPP/wiki/Module03)

### operator overloading

There are three ways to define operator overloading:
- **Member function**
  - A popular way to overload functions. As it is more of the spirit of object oriented programming and is a bit more efficient since the definition can directly reference member variables.
  - Since the operator is applied on a existing class object, the number of parameters to the operator is one less
    
- **Non-member function**
  - The function is defined outside of the class definition
  - All operands involved in the operator become the parameters. Binary operators can have 2 parameters and unary operators have 1 parameter
  - Operator cannot access private members in the parameters objects
    
- **Friend function**
    - Friend functions are declared within a class, but they are NOT class methods
    - A friend function is a regular function which has a privilege to access private members in the parameter objects
    
**Positional**
    - Even though there are three ways to overload operators, they're called the same way. The parameters to the operators are **positional**: the order of the parameters does matter. 
    - So for operators whose 1st argument is not a class object, you must write them as friend or nonmember functions. 

**Automatic type promotion**. 
  - If an operator is expecting a class object but received a different type, if there's a constructor in the class which can convert it to the class, the conversion / promotion is automatically applied by the compiler.  

**Rules on overloading operators**
- The following operator can only be overloaded as member functions: =, [], -> and ().
- The following operator cannot be overloaded: the dot operator (.), the scope resolution operator (::), sizeof, ?: and .*.
- You cannot create a new operator. 
- You cannot change the number of arguments that an operator takes.
- You cannot change the precedence of an operator.
- An overloaded operator cannot have default arguments.

### resources
- [operator overloading](https://condor.depaul.edu/ntomuro/courses/262/notes/lecture3.html)
- [polymorphism](https://www.cplusplus.com/doc/tutorial/polymorphism/)