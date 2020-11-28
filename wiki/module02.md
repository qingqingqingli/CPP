## Table of content
- [Ad-hoc polymorphism]()
- [Operators overload]()
- [Canonical classes]()

### Ad-hoc polymorphism (function overloading)
- Function overloading is a C++ principle, which allows you to define many functions having the same name, but accepting different parameters
- Function overloading is not just for class member functions. It works on any function. The principle is that you have an one and only function name and different parameters for every overload. This will allow you to specialise the process of a function based on its parameters

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
* Groups operators in C++
    * Arithmetic operators
    [![arithmetic operators](https://github.com/qingqingqingli/CPP/blob/main/images/arithmetic_operators.png)](https://github.com/qingqingqingli/CPP/wiki/Module02)
    * Assignment operators
    [![assignment_operators](https://github.com/qingqingqingli/CPP/blob/main/images/assignment_operators.png)](https://github.com/qingqingqingli/CPP/wiki/Module02)
    * Comparison operators
    [![comparison operators](https://github.com/qingqingqingli/CPP/blob/main/images/comparison_operators.png)](https://github.com/qingqingqingli/CPP/wiki/Module02)
    * Logical operators
    [![logical operators](https://github.com/qingqingqingli/CPP/blob/main/images/logical_operators.png)](https://github.com/qingqingqingli/CPP/wiki/Module02)
    * Bitwise operators
   
* Operators overview
    [![overview operators](https://github.com/qingqingqingli/CPP/blob/main/images/overview_operators.png)](https://github.com/qingqingqingli/CPP/wiki/Module02)

* Operator overloading allows you to define or change the behaviour of an operator in your program. Operators are essentially just functions

* C++ gives you full control on operator overloading, however this can lead to a bad use of the language. Only use operator overloading when it makes perfect sense

* The overload must be related to the natural semantics of the operator. There are not many cases with operator overload. Make sure there is a good use case for it, otherwise it's easy to make stupid mistakes with it

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


### resources
- [operator overloading reference](https://en.cppreference.com/w/cpp/language/operators)
- [Understanding and Using Floating Point Numbers](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html)
- [Floating point number representation](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html)
- [Printing floating point numbers](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html)
- [Introduction to Fixed Point Number Representation](https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html)
- [Stanford c++ handouts](http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1084/cs106l/handouts/)
- [Stanford cs slides](http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1084/lectures/)