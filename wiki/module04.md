## Table of contents
- [Sub-typing polymorphism]()
- [abstract classes]()
- [Operator overload]()
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

- An abstract class is a class that cannot be instantiated and is usually implemented as a class that has one or more pure virtual (abstract) functions

- A pure virtual function is one which must be overridden by any concrete derived class. This is indicated in the declaration with the syntax "=0" in the member function's declaration. It is a way of forcing a contract between the class designer and the users of that class

- If a class only has pure virtual functions (and no data), it is called an ```interface```

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

### Polymorphism (多态)

- The word means having many forms. It is the ability of a message(function / operator) to be displayed in more than one form. In C++, an operator or function can be given different meanings or functions.

- In C++, polymorphism is mainly divided into two types:
    - Compile time polymorphism (early binding / static polymorphism) - static in nature
    - Runtime polymorphism (late binding / dynamic polymorphism)

[![polymorphism](https://github.com/qingqingqingli/CPP/blob/main/images/polymorphism.png)](https://github.com/qingqingqingli/CPP/wiki/Module03)

### Virtual functions (virtual keyword)

- By marking the function in the base class as ```virtual```, you have the possibility of overriding this function in the derived class. This is key to allow polymorphism to work. 
- **Runtime cost for virtual functions**
  - Additional memory is required to store the V table, which allows us to dispatch to the correct function
  - Every time when we call a virtual function, we need to go through the V table to determine which function to map to use
  
### Interface & pure virtual functions (virtual keyword + "= 0")

- "= 0" makes a virtual function a pure virtual function

- It allows us to define a function in the base class that does not have an implementation, and force subclasses to implement that function 

- An interface only contains unimplemented methods and acts as a template. It also makes it impossible to instantiate that class. We must instantiate a subclass that has the functions implemented. A derived class can only be instantiated when it implements all of the pure virtual functions

### Shallow vs Deep Copies

- [source](http://www.fredosaurus.com/notes-cpp/oop-condestructors/shallowdeepcopy.html)

- **A shallow copy of an object copies all of the member field values.** This works well if the fields are values, but may not be what you want for fields that point to dynamically allocated memory. The pointer will be copied, but the memory it points to will not be copied -- the field in both the original object and the copy will then point to the same dynamically allocated memory, which is not usually what you want. The default copy constructor and assignment operator make shallow copies.

- **A deep copy copies all fields, and makes copies of dynamically allocated memory pointed to by the fields.** To make a deep copy, you must write a copy constructor and overload the assignment operator, otherwise the copy will point to the original, with disasterous consequences.

- **If an object has pointers to dynamically allocated memory, and the dynamically allocated memory needs to be copied when the original object is copied, then a deep copy is required.**

- A class that requires deep copies generally needs:
      - A **constructor** to either make an initial allocation or set the pointer to NULL. 
      - A **destructor** to delete the dynamically allocated memory. 
      - A **copy constructor** to make a copy of the dynamically allocated memory.
      - An **overloaded assignment** operator to make a copy of the dynamically allocated memory.

# copy constructor

- The best practice is to use assignation operation inside the copy constructor, so there's no duplication
- It is important to remember that the copy constructor is a constructor : it initialises data i.e you have to initialise const attributes and call parent classes' constructors in it. Don't remember to initialise values. 

### resources
- [operator overloading](https://condor.depaul.edu/ntomuro/courses/262/notes/lecture3.html)
- [polymorphism](https://www.cplusplus.com/doc/tutorial/polymorphism/)
- [virtual functions](https://www.programiz.com/cpp-programming/virtual-functions)
- [use recursion to create a deep copy of linked list](https://medium.com/spotthedifference/deep-copy-a-linked-list-b90d8376223f)
- [When can I use a forward declaration?](https://stackoverflow.com/questions/553682/when-can-i-use-a-forward-declaration)
- [What are forward declarations in C++?](https://stackoverflow.com/questions/4757565/what-are-forward-declarations-in-c)
