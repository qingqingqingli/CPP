
#pragma once
#include <iostream>
#include <algorithm>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define BLUE			"\033[34m"				/* Blue */

class ElementNotFound: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Element not found";
	}
};

template<typename T>
void	easyfind(T & t, int i)
{
	typename T::iterator iter;
	iter = std::find(t.begin(), t.end(), i);
	try {
		if (iter == t.end())
			throw (ElementNotFound());
	}
	catch (std::exception & exception) {
		std::cout << RED << exception.what() << RESET << std::endl;
		return ;
	}
	std::cout << BLUE << "Element found: " << *iter << RESET << std::endl;
}