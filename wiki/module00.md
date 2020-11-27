## Table of content

- [namespaces](https://github.com/qingqingqingli/CPP/wiki/Module00#namespaces)
- [stdio streams](https://github.com/qingqingqingli/CPP/wiki/Module00#stdio-streams)
- [class & instance](https://github.com/qingqingqingli/CPP/wiki/Module00#class--instance)
- [member attributes & functions](https://github.com/qingqingqingli/CPP/wiki/Module00#member-attributes--functions)
- [this pointer](https://github.com/qingqingqingli/CPP/wiki/Module00#this-pointer-the-self-keyword)
- [const](https://github.com/qingqingqingli/CPP/wiki/Module00#const)
- [visibility](https://github.com/qingqingqingli/CPP/wiki/Module00#visibility)
- [encapsulation](https://github.com/qingqingqingli/CPP/wiki/Module00#encapsulation)
- [class vs struct](https://github.com/qingqingqingli/CPP/wiki/Module00#class-vs-struct)
- [accessors](https://github.com/qingqingqingli/CPP/wiki/Module00#accessors-getters)
- [comparison](https://github.com/qingqingqingli/CPP/wiki/Module00#comparison)
- [non member attributes & functions](https://github.com/qingqingqingli/CPP/wiki/Module00#non-member-attributes--functions)
- [pointers to members](https://github.com/qingqingqingli/CPP/wiki/Module00#pointers-to-members)
- [C++ string](https://github.com/qingqingqingli/CPP/wiki/Module00#c-strings)
- [Difference between std::cin and getline](https://github.com/qingqingqingli/CPP/wiki/Module00#difference-between-stdcin-and-getline)
- [Static attributes and functions within a class](https://github.com/qingqingqingli/CPP/wiki/Module00#static-attributes-and-functions-within-a-class)

### namespaces

- namespaces provides a method for preventing name conflicts in large projects. It allows you to group symbols that are related together

- All the entities included in the ```C++ standard library``` are included in the ```std``` namespace

- However, ```using namespace std``` is considered bad practice, as it imports the entirety of the ```std``` namespace into the current namespace of the program. It's better to use scope resolution operator to access the specific entity (like ```std::cout```)

``` C++
int	gl_var = 1;
int	f(void) {return 2;}

namespace	Foo {
	int	gl_var = 3;
	int	f(void) {return 4;}
}

namespace	Bar {
	int 	gl_var = 5;
	int	f(void) {return 6;}
}

// use namespace aliasing to keep a shorter and more expressive syntax
// :: scope resolution operator
namespace 	Muf = Bar;

int	main(void){
	printf("gl_var:			[%d]\n", gl_var);
	printf("f():			[%d]\n\n", f());

	//exactly the same as above (global scope)
	printf("::gl_var:		[%d]\n", ::gl_var);
	printf("::f():			[%d]\n\n", ::f());

	printf("Foo::gl_var:		[%d]\n", Foo::gl_var);
	printf("Foo::f():		[%d]\n\n", Foo::f());

	printf("Bar::gl_var:		[%d]\n", Bar::gl_var);
	printf("Bar::f():		[%d]\n\n", Bar::f());

	printf("Muf::gl_var:		[%d]\n", Muf::gl_var);
	printf("Muf::f():		[%d]\n\n", Muf::f());

	return (0);
}

```

> *Result*
```shell
gl_var:			[1]
f():			[2]

::gl_var:		[1]
::f():			[2]

Foo::gl_var:		[3]
Foo::f():		[4]

Bar::gl_var:		[5]
Bar::f():		[6]

Muf::gl_var:		[5]
Muf::f():		[6]
```

### stdio streams

- Streams acts as an intermediaries between the programs and the actual IO devices. It frees the programmers from handling the actual devices

- ```<<``` ```>>``` redirects the flow to or from  a stream (like ```std::cout``` or ```std::cin```)

- Object ```std::endl``` handles newline character on different OS

```C++
#include <iostream>

int main(void)
{
	char buff[512];

	std::cout << "Hello World!" << std::endl;
	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;
	return 0;
}

```

> *Result*
```shell
Hello World!
Input a word: xx
You entered: [xx]
```

### class & instance

- C++ is an object-oriented programming language. An object is created from a class. Everything in C++ is associated with classes and objects, along with its attributes(```variables```) and methods(```functions```)

- A class is a user-defined data type. It works as an object constructor, or a blueprint for creating objects. A class is static and it's a model which objects are built on. Instance is the dynamic part and it's an ```instantiation``` of a class

- ```Constructors``` and ```destructors``` are special member functions of classes that are used to construct and destroy class objects.

	- ```Constructor``` may involve memory allocation and initialization for objects. ```Destructor``` may involve cleanup and deallocation of memory for objects
	- Like other member functions, constructors and destructors are declared within a class declaration. They can be defined inline or external to the class declaration
	- ```Constructor``` and ```destructor``` don't have a return type
	- The compiler ```automatically``` calls constructors when defining class objects and calls destructors when class objects go out of scope.

> An example of Class

- *Sample.class.hpp*

```C++
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class	Sample
{
public:

	Sample(void); // CPP use the name of the class for constructor
	~Sample(void); // and the name of the class for destructor
}; // don't forget to end with semicolon

#endif
```

- *Sample.class.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
```

- *main.cpp*

```C++
#include "Sample.class.hpp"

int	main(void)
{
	// the line below instantiate an instance
	// code in constructor will also run (to initialise data for instance)
	Sample	instance;
	return (0);
	// destructor is called when the instance goes out of scope
}
```

- *Result*

```shell
Constructor called
Destructor called

```

### member attributes & functions

- A member function of a class is a function that has its definition or its prototype within the class definition like any other variable. It operates on any object of the class of which it is a member, and has access to all the members of a class for that object.

- Member attribute is a variable you have in your class, and you may use from an instance.

> An example of class and member functions ([source link](https://www.tutorialspoint.com/cplusplus/cpp_class_member_functions.htm))

[![member_function](https://github.com/qingqingqingli/CPP/blob/main/images/member_function.png)](https://github.com/qingqingqingli/CPP/wiki/Module00)

### this pointer (the self keyword)

- In C++, each object gets its own copy of data members and all objects share a single copy of member functions

- One member function only has one copy and is used by multiple objects, how are the proper data members accessed and updated? The compiler supplies an implicit pointer along with the names of the functions as 'this'

- Constructor will be executed when the instance of the class is instantiated. It is an opportunity to initialise the data inside of a class during construction

- To refer to your current instance, use the special instance pointer ```this```

> Example of member attributes, functions & this pointer

- *Sample.class.hpp*

```C++
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
	public:

		int	foo;

		Sample(void);
		~Sample(void);

		void	bar(void);
};

#endif
```

- *Sample.class.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	// it is possible to call a function from an instance pointer
	this->bar();
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar(void)
{
	std::cout << "Member function bar called" << std::endl;
	return;
}
```

- *main.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;

	return (0);
}
```

- *Result*

```Shell
Constructor called
this->foo: 42
Member function bar called
Destructor called
```

### initialization list

- Initialization list is used in initializing the data members of a class. The list of members to be initialized is indicated with constructor as a ```comma-separated list``` followed by a colon

> Example of initialization list

- *Sample.class.hpp*

```C++
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:
	//attributes
	char a1;
	int a2;
	float a3;

	Sample(char p1, int p2, float p3);
	~Sample(void);
};

#endif
```

- *Sample.class.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

//initialise the attributes in a class
Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}
```

- *main.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance('a', 42, 4.2f);

	return (0);
}
```

- *Result*

```Shell
Constructor called
this->a1 = a
this->a2 = 42
this->a3 = 4.2
Destructor called
```

### const

- Variables declared with ```const``` added become constants and cannot be altered by the program

- ```const data members``` must be initialized using ```initialization list```. No memory is allocated separately for const data member. It is folded in the symbol table due to which we need to initialize it. it is also a copy constructor. We don't need to call the assignment operator which means we are avoiding one extra operation

- The more your code is ```const``` and ```read only```, the more your code will be robust in the long term

> Example of const

- *Sample.class.hpp*

```C++
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	float const pi;
	int qd;

	Sample(float const f);
	~Sample(void);

	// const between ) & ; -> the instance of the class will never be altered
	void bar(void) const;
};

#endif
```

- *Sample.class.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

// it's not assigning f value to pi attribute
// it's initialising pi attribute to the f value
Sample::Sample(float const f) : pi(f), qd(42) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

// this is central to CPP
// define const when your member function should never be changed in the \
// current instance of your class
void	Sample::bar(void) const {

	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	// this assignment below won't work, as it's a const function
	// this->qd = 0;
	return;
}
```

- *main.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

int main() {

	Sample instance(3.14f);

	instance.bar();

	return (0);
}
```

- *Result*

```Shell
this->pi = 3.14
this->qd = 42
Destructor called
```

### visibility

- ```Public``` and ```private``` will allow you to control the encapsulation of the members of the class. It means that the attributes and member functions will only be visible from inside the class or from the outside

- ```Public``` attributes and functions can be accessed both inside and outside of the class

- In comparison, ```private``` attributes and functions are only accessible from inside of the class. These attributes and functions are perfectly invisible and inaccessible from the outside of the class, otherwise, the code will not compile

- ```Keep in mind```: for attributes or functions that have nothing to do with the user, keep them private in the class. When designing the class, always think about what to keep internally or expose to the outside

> Example of const

- *Sample.class.hpp*

```C++
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	int publicFoo;

	// need to consider what makes more sense to place the constructor \
	// and destructor in private or public
	Sample(void);
	~Sample(void);

	void publicBar(void) const;

private:

	// use _ prefix for all private identifier
	// it gives reader a quick idea of which is public or private
	int _privateFoo;

	void _privateBar(void) const;
};

#endif
```

- *Sample.class.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

// this can also be written with initialisation list
Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo = " << this->publicFoo <<std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo = " << this->_privateFoo <<std::endl;

	this->publicBar();
	this->_privateBar();

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::publicBar(void) const
{
	std::cout << "Member function publicBar called" << std::endl;
	return;
}

void	Sample::_privateBar(void) const
{
	std::cout << "Member function _privateBar called" << std::endl;
	return;
}
```

- *main.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo = " << instance.publicFoo << std::endl;
	// compilation error when you want to access private attributes
	// instance._privateFoo = 42;
	// std::cout << "instance._privateFoo = " << instance._privateFoo << std::endl;

	instance.publicBar();
	// compilation error when you want to access private function
	// instance._privateBar();

	return (0);
}
```

- *Result*

```Shell
Constructor called
# inside the constructor: can access both private and public attributes / functions
this->publicFoo = 0
this->_privateFoo = 0
Member function publicBar called
Member function _privateBar called
# outside the constructor: can only access public attributes / functions
instance.publicFoo = 42
Member function publicBar called
Destructor called
```

### encapsulation

- In Object Oriented Programming, encapsulation is defined as binding together the data and the functions that manipulates them. Encapsulation also leads to data abstration or hiding

- Encapsulation is a means, not an end. Encapsulation is useful only because it yields other things in our software that we care about. In particular, it yields flexibility and robustness

- Unencapsulated software is flexible, and as a result, it's not very robust. When the world changes, the software is unable to gracefully change with it

> An illustration of encapsulation ([source link](https://www.geeksforgeeks.org/encapsulation-in-c/))

[![encapsulation](https://github.com/qingqingqingli/CPP/blob/main/images/encapsulation.png)](https://github.com/qingqingqingli/CPP/wiki/Module00)

### class vs struct

- A class can also contain functions (called ```methods``` in C++). The member attributes and methods are hidden from the outside world, unless their declaration follows a public label

- Special methods (```constructor``` and ```destructor```) in C++. They run automatically when an object (an instance of the class) is created and destroyed

- Operators to work on the new data type can be defined using special methods (```member functions```)

- One class can be used as the basis for the definition of another (```inheritance```)

- Declaring a variable of the new type (an object) requires just the name of the class. The keyword ```class``` is not required

- ```struct``` and ```class``` work almost the same way in C++. The difference is that the default accessibility / scope of member variables and methods is ```private``` in a class, while it's ```public``` in a struct. The use of ```class``` is generally preferred

### accessors (getters)

- An accessor is a member function that allows someone to retrieve the contents of a protected data member

	- The accessor must have the ```same type``` as the returned variable
	- The accessor does not need to have arguments
	- A ```naming convention``` must exist, and the name of the accessor must begin with the ```get``` prefix

- **In practice, all attributes of a class are private**. Getters are the interface between the user and private attributes, to be sure that the values are always correct.

- They usually have the prefix of ```get``` and ```set```. Getter can only access in the read-only mode and won't alter the content of the class. It allows you to have some control over what to give to the user. It also sets control to the user's input and make sure that they make sense

> Example of getter

- *Sample.class.hpp*

```C++
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	Sample(void);
	~Sample(void);

	int	getFoo(void) const;
	void setFoo(int v);

private:

	int	_foo;
};

#endif
```

- *Sample.class.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo() = " << this->getFoo() << std::endl;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

// grant only read-only access to the attribute
int	Sample::getFoo(void) const
{
	// return a copy of the _foo attribute
	return this->_foo;
}

// this way allows the user to change the _foo attribute
void	Sample::setFoo(int v)
{
	// don't allow _foo to have a negative value
	if (v >= 0)
		this->_foo = v;
	return;
}
```

- *main.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;

	instance.setFoo(42);
	std::cout << "instance.getFoo() = " << instance.getFoo() << std::endl;
	instance.setFoo(-42);
	std::cout << "instance.getFoo() = " << instance.getFoo() << std::endl;

	return (0);
}
```

- *Result*

```Shell
Constructor called
this->getFoo() = 0
instance.getFoo() = 42
instance.getFoo() = 42
Destructor called
```

### comparison

- There are ```structural``` equality and ```physical``` equality
	- ```Structural``` equality means that two objects have equivalent content
	- ```Physical``` / ```referential``` equality means that the pointers for two objects are the same (Use ```==``` to check in C++)

> Below is an illustration ([source link](https://www.cs.umd.edu/class/fall2015/cmsc330/lectures/Ruby1.pdf)):

[![equality](https://github.com/qingqingqingli/CPP/blob/main/images/equality.png)](https://github.com/qingqingqingli/CPP/wiki/Module00)

> Example of comparison

- *Sample.class.hpp*

```C++
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:
	Sample(int v);
	~Sample(void);

	int	getFoo(void) const;
	// taking as a parameter (the address of a sample instance). Making a
	// comparison between the current instance and the passed parameter instance
	int	compare(Sample *other) const ;

private:
	int	_foo;
};

#endif
```

- *Sample.class.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int v) : _foo(v)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Sample::getFoo(void) const
{
	return this->_foo;
}

int	Sample::compare(Sample *other) const
{
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}
```

- *main.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	// physically different but structurally identical instances
	Sample instance1(42);
	Sample instance2(42);

	if (&instance1 == &instance1)
		std::cout << "instance 1 and instance 1 are physically equal" << std::endl;
	else
		std::cout << "instance 1 and instance 1 are not physically equal" << std::endl;

	if (&instance1 == &instance2)
		std::cout << "instance 1 and instance 2 are physically equal" << std::endl;
	else
		std::cout << "instance 1 and instance 2 are not physically equal" << std::endl;

	if (instance1.compare(&instance1) == 0)
		std::cout << "instance 1 and instance 1 are structurally equal" << std::endl;
	else
		std::cout << "instance 1 and instance 1 are not structurally equal" << std::endl;

	if (instance1.compare(&instance2) == 0)
		std::cout << "instance 1 and instance 2 are structurally equal" << std::endl;
	else
		std::cout << "instance 1 and instance 2 are not structurally equal" << std::endl;

	return (0);
}
```

- *Result*

```Shell
Constructor called
Constructor called
instance 1 and instance 1 are physically equal
instance 1 and instance 2 are not physically equal
instance 1 and instance 1 are structurally equal
instance 1 and instance 2 are structurally equal
Destructor called
Destructor called
```

### non member attributes & functions

- ```Member``` attributes / functions are present inside of a class. It means that the class needs to be instantiated, in order to use this attribute / function. Each attribute will be different in each instance

- ```Non member``` variables and functions exist at the class level, and not at the instance level

- Another terminology:
	- ```Instance``` variables / functions refers to ```member``` attributes / functions
	- ```Class``` variables / functions refers to ```non member``` attributes / functions

> An algorithm on whether to choose member function or non member function, created by Scott Meyers ([source link](https://www.drdobbs.com/cpp/how-non-member-functions-improve-encapsu/184401197))

``` C
if (f needs to be virtual)
   make f a member function of C;
else if (f is operator>> or operator<<)
   {
   make f a non-member function;
   if (f needs access to non-public members of C)
      make f a friend of C;
   }
else if (f needs type conversions on its left-most argument)
   {
   make f a non-member function;
   if (f needs access to non-public members of C)
      make f a friend of C;
   }
else if (f can be implemented via C public interface)
   make f a non-member function;
else
   make f a member function of C;
```

> Example of non member attributes / functions

- *Sample.class.hpp*

```C++
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:

	Sample(void);
	~Sample(void);

	// non member function
	// when the function does not have anything to do with the other class
	// functions, but you want it to be part of the class
	static int getNbInst(void);

private:

	// non member attribute
	// number of instances: this information only makes sense at the class level
	static int _nbInst;

};

#endif
```

- *Sample.class.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;
	return;
}

// With member function, CPP will pass as a parameter, an instance of your class
// so this-> can be used

// this pointer is not passed for a non member function, so you can't
// use this-> here
int	Sample::getNbInst(void)
{
	return Sample::_nbInst;
}

// this is the only way to initialise a non member attribute (static attribute)
// this is initialised without an instance being created
int	Sample::_nbInst = 0;
```

- *main.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

void f0(void)
{
	Sample instance;

	std::cout << "Number of instances = " << instance.getNbInst() << std::endl;

	return;
}

void f1(void)
{
	Sample instance;

	std::cout << "Number of instances = " << instance.getNbInst() << std::endl;
	f0();

	return;
}

int main(void)
{
	std::cout << "Number of instances = " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances = " << Sample::getNbInst() << std::endl;

	return 0;
}
```

- *Result*

```Shell
Number of instances = 0
Constructor called
Number of instances = 1
Constructor called
Number of instances = 2
Destructor called
Destructor called
Number of instances = 0
```

### pointers to members

- To have pointer to data member and member functions, you need to make them public

> Example of pointers

- *Sample.class.hpp*

```C++
#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample
{
public:

	int foo;

	Sample(void);
	~Sample(void);

	void bar(void) const;

};

#endif
```

- *Sample.class.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : foo(0)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void Sample::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return;
}
```

- *main.cpp*

```C++
#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
	// allocated on the stack
	Sample instance;
	// declared a pointer to the address of instance, \
	// which is stored in a variable (instancep)
	Sample * instancep = &instance;

	// declaring a pointer on an interger attribute of a Sample class
	int Sample::*p = NULL;
	// declaring a pointer on a const member function of a Sample class
	void (Sample::*f)(void) const;

	p = &Sample::foo; // this is not specific about which instance that p refers to

	std::cout << "Value of member foo = " << instance.foo << std::endl;
	// .* operator to specify the instance that p refers to
	instance.*p = 21; // directly using the instance
	std::cout << "Value of member foo = " << instance.foo << std::endl;
	instancep->*p = 42; // pointer to an instance
	std::cout << "Value of member foo = " << instance.foo << std::endl;

	f = &Sample::bar; // can't tell which instance that it's refering to

	(instance.*f)(); // use .* operator to specify the specify
	(instancep->*f)(); // or use ->* a pointer to refer to the instance

	return 0;
}
```

- *Result*

```Shell
Constructor called
Value of member foo = 0
Value of member foo = 21
Value of member foo = 42
Member function bar called
Member function bar called
Destructor called
```

## C++ strings

> [Source link](https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1132/handouts/08-C++-Strings.pdf)

- ```str.length()```. Count the number of characters in a string
- ```str[]```. Use square brackets to access individual characters within a string. No range-checking
- ```str.at(int index)```. Retrieve the character at a position with the benefit of built-in range-checking.
- ```==``` / ```!=```. Compare two strings for equality
- ```s1 + s2``` / ```+=```. Appending another string or a single character to the end of a string
- ```str.find(key)``` / ```str.find(key, n)```. Search within a string for a particular string or character. ```key``` can either be a string or a character. We say the find member function is overloaded to allow more than one usage.
- ```str.substr(start, length)```. Extract substrings. Create new strings by extracting portions of a larger one. This member function does not change the receiver string, as it makes a ```new``` string with a copy of the characters specified.
- ```str1.insert(start, str2)``` / ```str1.replace(start, length, str2)```. Modify a string by inserting and replacing. These functions do modify the receive string
- ```C-style string```. Although old-style C char * strings and C++ strings can co-exist in a program, almost all use will be of C++ strings, since they have a much richer set of operations and are less error-prone to work with. However, when working with file streams, it's unavoidable to use C-style string
- **Important**: When using ```(std::string str)``` as parameter, it takes a copy from the calling function to the destination function. It is not fast to dynamically allocate a string to create a copy. If you are not going to modify the string, send it as a ```const &```, in this way, it will not create a copy

## Difference between std::cin and getline

- ```std::cin >> string```
	- Each extracted character is appended to the string
	- The extraction operations use whitespaces as separators. Therefore, this operation will only extract what can be considered as a word from the stream

- ```getline```
	- To extract entire lines of text
	- The extraction stops until the delimitation character, or the end of file is reached, or some other error occurs during the input operation

## Static attributes and functions within a class

- **Static attribute**:
	- There will only be ```one instance of that variable```, no mater how many objects you've instantiated. If one instance changes the variable, the change will be reflected on all instances
	- Therefore, it does not make sense to refer to the attributes inside an instance, but rather by ```className::attributeName```
	- It is still different from a global variable because this static attribute is still inside a class

- **Static methods**:
	- A static method is called without a class instance and it ```doesn't have access to a class instance```
	- Within static methods, you ```can't refer to a class instance```, since you don't have that class instance to refer to
	- A static methods ```can not access non static variables```, because a static method does not have a class instance
	- In comparison, every non-static method inside a class always gets an instance of the current class as a parameter (```this->```). Classes are functions with a hidden parameter. A static method does not get that parameter

---
### Resources

- [Stream IO and File IO](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp10_IO.html)
- [The C++ 'const' Declaration: Why & How](http://duramecho.com/ComputerInformation/WhyHowCppConst.html)
- [struct vs class in C++](https://blogs.sw.siemens.com/embedded-software/2014/06/02/struct-vs-class-in-c/)
- [How Non-Member Functions Improve Encapsulation](https://www.drdobbs.com/cpp/how-non-member-functions-improve-encapsu/184401197)
- [string C++ examples](http://anaturb.net/C/string_exapm.htm)
- [strings in C++](https://beginnersbook.com/2017/08/strings-in-c/)
