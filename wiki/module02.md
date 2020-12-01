## Table of content
- [Ad-hoc polymorphism]()
- [Operators overload]()
- [Canonical classes]()

### Ad-hoc polymorphism (function overloading)
- Function overloading is a C++ principle, which allows you to **define many functions having the same name, but accepting different parameters**
- It is not just for class member functions, but also works on any function. The principle is that you have an ```one-and-only``` function name and different parameters for every overload. This will allow you to specialise the process of a function based on its parameters

> Example: Sample.hpp

```c++
class Sample {
public:
	Sample();
	~Sample();

	void bar(char const c) const;
	void bar(int const n) const;
	void bar(float const z) const;
	void bar(Sample const & i) const;
};
```

> Example: Sample.cpp

```c++
#include <iostream>
#include "Sample.h"

Sample::Sample() {
	std::cout << "Constructor called" << std::endl;
}
Sample::~Sample() {
	std::cout << "Destructor called" << std::endl;
}

void Sample::bar(const char c) const {
	std::cout << "Member function bar called with char overload : " << c << std::endl;
}

void Sample::bar(const int n) const {
	std::cout << "Member function bar called with int overload : " << n << std::endl;
}

void Sample::bar(const float z) const {
	std::cout << "Member function bar called with float overload : " << z << std::endl;
}

void Sample::bar(const Sample & i) const {
	(void) i;
	std::cout << "Member function bar called with Sample class overload" << std::endl;
}
```

> Example: main.cpp

```c++
#include "Sample.h"

int main() {
	Sample sample;
	float f = 3.14;

	sample.bar(5);
	sample.bar('c');
	sample.bar(f);
	sample.bar(sample);
	return 0;
}
```

> Output

``` shell
Constructor called
Member function bar called with int overload : 5
Member function bar called with char overload : c
Member function bar called with float overload : 3.14
Member function bar called with Sample class overload
Destructor called
```

### Operator overload
* **Operator overloading enables you to write function members that enable the basic operators to be applied to class objects** (source: Beginning C++). To do this, you write a function that redefines each operator that you want to use with your class

* Groups operators in C++
    * Arithmetic operators
    * Assignment operators
    * Comparison operators
    * Logical operators
    * Bitwise operators
   
* Operators overview
    [![overview operators](https://github.com/qingqingqingli/CPP/blob/main/images/overview_operators.png)](https://github.com/qingqingqingli/CPP/wiki/Module02)

* Operator overloading allows you to define or change the behaviour of an operator in your program. Operators are essentially just functions

* C++ gives you full control on operator overloading, however this can lead to a bad use of the language. Only use operator overloading when it makes perfect sense

* The overload must be related to the natural semantics of the operator. There are not many cases with operator overload. **Make sure there is a good use case for it, otherwise it's easy to make stupid mistakes with it**

> Example: Integer.hpp

```c++
#include <iostream>

class Integer {
public:
	Integer(int const n);
	~Integer();

	int getValue() const;

	Integer & operator=(Integer const & rhs); //rhs = right hand side
	Integer operator+(Integer const & rhs) const;

private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, Integer const & rhs);
```
> Example: Integer.cpp

```c++
#include "integer.h"

Integer::Integer(const int n) : _n(n){
	std::cout << "Constructor called with value " << n << std::endl;
}

Integer::~Integer() {
	std::cout << "Destructor called with value " << this->_n << std::endl;
}

int Integer::getValue() const {
	return this->_n;
}

Integer & Integer::operator=(const Integer &rhs) {
	std::cout << "Assignment operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();

	return *this;
}

Integer Integer::operator+(const Integer &rhs) const {
	std::cout << "Addition operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;

	return Integer(this->_n + rhs.getValue());
}

std::ostream & operator<<(std::ostream & o, Integer const & rhs){
	o << rhs.getValue();
	return o;
}
```
> Example: main.cpp

```c++
#include "integer.h"
#include <iostream>

int main(){
	Integer x(30);
	Integer y(10);
	Integer z(0);

	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << y << std::endl;
	y = Integer(12);
	std::cout << "Value of y : " << y << std::endl;

	std::cout << "Value of z : " << z << std::endl;
	z = x + y;
	std::cout << "Value of z : " << z << std::endl;

	return 0;
}
```

> Output

``` shell
Constructor called with value 30
Constructor called with value 10
Constructor called with value 0
Value of x : 30
Value of y : 10
Constructor called with value 12
Assignment operator called from 10 to 12
Destructor called with value 12
Value of y : 12
Value of z : 0
Addition operator called with 30 and 12
Constructor called with value 42
Assignment operator called from 0 to 42
Destructor called with value 42
Value of z : 42
Destructor called with value 42
Destructor called with value 12
Destructor called with value 30
```

### Canonical form

* It includes:
    * A default constructor
    * A default destructor
    * A copy constructor
    * A assignation operator

> Example: Sample.hpp

```c++
#include <iostream>

class Sample {
public:
	Sample(void);								//Canonical form
	Sample(const int n);
	Sample(Sample const & src);					//Canonical form copy constructor
	~Sample(void);								//Canonical form

	Sample & operator=(Sample const & rhs);		//Canonical form

	int getFoo(void) const;

private:
	int _foo;
};

std::ostream & operator<<(std::ostream & o, Sample const & i);
```

> Example: Sample.cpp

```c++
#include "Sample.h"

Sample::Sample(void) : _foo(0){
	std::cout << "Default constructor called" << std::endl;
}

Sample::Sample(const int n) : _foo(n) {
	std::cout << "Parametric constructor called" << std::endl;
}

Sample::Sample(const Sample &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Sample::~Sample() {
	std::cout << "Destructor called" << std::endl;
}

Sample &Sample::operator=(const Sample &rhs) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Sample const & rhs){
	o << "The value of _foo is : " << rhs.getFoo();
	return o;
}

int Sample::getFoo(void) const {
	return this->_foo;
}
```

> Example: main.cpp

```c++
#include "Sample.h"

int main(){
	Sample instance1;
	Sample instance2(42);
	Sample instance3(instance1);

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;

	return 0;
}
```

> Output

``` shell
Default constructor called
Parametric constructor called
Copy constructor called
Assignment operator called
The value of _foo is : 0
The value of _foo is : 42
The value of _foo is : 0
Assignment operator called
The value of _foo is : 42
Destructor called
Destructor called
Destructor called
```

### Copy constructor

* **If a class has data members that are pointers, you should implement the copy constructor**. If you don't, the default copy constructor will copy an object by copying the values of the data members, which means just the addresses for pointers will be copied - not what they point to
* The result will be two or more objects with members pointing to the same object. A change to an object that is pointed to by a data member of one object will affect all the duplicate objects
* When you create a copy constructor, the duplicate can be dependent from the original

### Fixed point numbers

> [source](https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html)

* The use of fixed point data type is used widely in digital signal processing (DSP) and game applications, where performance is sometimes more important then precision. Fixed point arithmetic is much faster than floating point arithmetic

* **Binary point**. The key to represent fractional numbers is the concept of binary point. It acts as a divider between the integer and the fractional part of a number. 

* **Fixed point numbers are indeed a close relative to integer representation. The two only differs in the position of binary point.** In fact, you might even consider integer representation as a "special case" of fixed point numbers, where the binary point is at position 0. All the arithmetic operations a computer can operate on integer can therefore be applied to fixed point number as well.0
  
* Therefore, the benefit of fixed point arithmetic is that **they are as straight-forward and efficient as integers arithmetic in computers**. We can reuse all the hardware built to for integer arithmetic to perform real numbers arithmetic using fixed point representation. In other word, fixed point arithmetic comes for free on computers.
  
* **The disadvantage of fixed point number, is than of course the loss of range and precision when compare with floating point number representations.** For example, in a ```fixed<8,1>``` representation, our fractional part is only precise to a quantum of ```0.5```. We cannot represent number like ```0.75```. We can represent ```0.75``` with ```fixed<8,2>```, but then we loose range on the integer part.

* **The idea behind fixed-point arithmetic is that you store the values multiplied by a certain amount, use the multiplied values for all calculus, and divide it by the same amount when you want the result.** The purpose of this technique is to use integer arithmetic (int, long...) while being able to represent fractions.

* In summary, fixed point is a simple yet very powerful way to represent fractional numbers in computer. By reusing all integer arithmetic circuits of a computer, fixed point arithmetic is orders of magnitude faster than floating point arithmetic. This is the reason why it is being used in many game and DSP applications. On the other hand, it lacks the range and precision that floating point number representation offers. You, as a programmer or circuit designer, must do the tradeoff.


### resources
- [operator overloading reference](https://en.cppreference.com/w/cpp/language/operators)
- [Understanding and Using Floating Point Numbers](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html)
- [Floating point number representation](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html)
- [Printing floating point numbers](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html)
- [Introduction to Fixed Point Number Representation](https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html)
- [Fixed Point Arithmetic in C Programming](https://stackoverflow.com/questions/10067510/fixed-point-arithmetic-in-c-programming)
