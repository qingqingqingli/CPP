
#pragma once
#include <iostream>
#include <algorithm>

template<typename T>
void	easyfind(T & t, int i)
{
	typename T::iterator iter;
	iter = std::find(t.begin(), t.end(), i);
	if (iter != t.end())
		std::cout << "Element found: " << *iter << std::endl;
	else
		std::cout << "Element not found" << std::endl;
}