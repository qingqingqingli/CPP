/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/22 09:58:15 by qli           #+#    #+#                 */
/*   Updated: 2021/01/22 09:58:15 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib> // srand function
#include <ctime> // time

class Base {public: virtual ~Base(void){}};
class A : public Base {public:	A(){std::cout << "A" << std::endl;}};
class B : public Base {public:	B(){std::cout << "B" << std::endl;}};
class C : public Base {public:	C(){std::cout << "C" << std::endl;}};

Base * generate(void)
{
	srand(time(NULL));
	int ret = rand() % 3;
	if (ret == 0)
		return static_cast<Base *>(new A());
	else if (ret == 1)
		return static_cast<Base *>(new B());
	else
		return static_cast<Base *>(new C());
}

void identify_from_pointer(Base * p)
{
	A * a = dynamic_cast<A *>(p);
	if (a)
	{
		std::cout << "identify_from_pointer: AA" << std::endl;
		return;
	}
	B * b = dynamic_cast<B *>(p);
	if (b)
	{
		std::cout << "identify_from_pointer: BB" << std::endl;
		return;
	}
	C * c = dynamic_cast<C *>(p);
	if (c)
	{
		std::cout << "identify_from_pointer: CC" << std::endl;
		return;
	}
	std::cout << "Can not identify this type" << std::endl;
}

void identify_from_reference(Base & p)
{
	try {
		A & a = dynamic_cast<A &>(p);
		std::cout <<
	}
	catch (std::exception &e) {

	}

}

int main(void)
{
	Base *base = generate();
	identify_from_pointer(base);

	delete base;
	return 0;
}