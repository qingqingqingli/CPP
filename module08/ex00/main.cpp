
#include <vector>
#include <list>
#include "easyfind.hpp"

int main(void)
{

	std::cout << "** Int Vector **" << std::endl;

	std::vector<int> intVector;

	for (int i = 0; i <= 40; i++)
		intVector.push_back(i);

	easyfind(intVector, 25);
	easyfind(intVector, 40);
	easyfind(intVector, 50);

	std::cout << "** Int List **" << std::endl;

	std::list<int> intList;

	for (int i = 0; i <= 40; i++) {
		intList.push_back(i);
	}

	easyfind(intList, 25);
	easyfind(intList, 40);
	easyfind(intList, 50);

	return 0;
}