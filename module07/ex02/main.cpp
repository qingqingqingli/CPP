
#include "Array.hpp"

int main(void)
{
	Array a = Array();
	Array b = Array(5);
	Array c = Array(2);

	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;

	b = c;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;

	Array e = Array(c);
	for (unsigned int i = 0; i < e.size(); i++)
		std::cout << e[i] << std::endl;

	Array d = Array();
	for (unsigned int i = 0; i < d.size(); i++) {
		std::cout << d[i] << std::endl;
	}

	b[80];
	d[80];
	e[80];

	return 0;
}







