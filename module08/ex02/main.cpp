
#include "MutantStack.hpp"
#include <iostream>
#include <stack>

int main(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl; // returns topmost element - 17

	mstack.pop(); // removes topmost element - 17
	std::cout << mstack.top() << std::endl; // returns topmost element - 5
	std::cout << mstack.size() << std::endl; // 1

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << mstack.top() << std::endl; // 0
	std::cout << mstack.size() << std::endl; // 5

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	return 0;
}