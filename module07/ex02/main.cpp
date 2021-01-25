
#include "Array.hpp"

int main(void)
{
	Array<char> a = Array<char>(3);

	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;

	std::cout << "-----------" << std::endl;

	Array<int> b = Array<int>(3);
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;

	std::cout << "-----------" << std::endl;

	Array<int> c = Array<int>(b);

	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << std::endl;

	std::cout << "-----------" << std::endl;

	a[80];
	b[80];
	c[80];

	std::cout << "-----------" << std::endl;

	int * f = new int();
	std::cout << *f << std::endl;

	std::cout << "-----------" << std::endl;

	delete f;
	return 0;
}







