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
* C++ gives you full control on operator overloading, however this can lead to a bad use of the language. Only use operator overloading when it makes perfect sense. 

### Canonical form

* Assignment operator
    * 

### resources
- [operator overloading reference](https://en.cppreference.com/w/cpp/language/operators)
- [Understanding and Using Floating Point Numbers](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point.html)
- [Floating point number representation](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html)
- [Printing floating point numbers](https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_printing.html)
- [Introduction to Fixed Point Number Representation](https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html)
- [Stanford c++ handouts](http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1084/cs106l/handouts/)
- [Stanford cs slides](http://web.stanford.edu/class/archive/cs/cs106b/cs106b.1084/lectures/)