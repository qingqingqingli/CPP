## Table of contents
- [STL containers]()
- [Algorithms]()
- [resource]()
- []()
- []()

### STL containers

- ```const_iterator```. There are normal iterators as well in C++. Iterators do not only work for list, but literally almost all STL containers. 

> example

```C++

#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation;

int main()
{
	std::list<int>  lst1;
	std::map<std::string, IOperation*>  map1;
	std::vector<int>    v1; // array to contain what we need
	std::vector<int>    v2(42, 100);
	
	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);
	
	map1["opA"] = new OperationA;
	map1["opB"] = new OperationB;

	std::list<int>::const_iterator  it; // STL iterator works almost the same way as a pointer
	std::list<int>::const_iterator  ite = lst1.end(); // lst1.end is not the last element. It's a value that we can compare to that means that we are over the last element
	
	for (it = lst1.begin(); it != ite; ++it)
    {
		std::cout << *it << std::endl;
    }
	return 0;
}

```

### Algorithms

- There are a collection of algorithms that are implemented. 

> example

```C++
#include <iostream>
#include <algorithm>
#include <list>

void displayInt(int i)
{
	std::cout << i << std::endl;
}

int main()
{
	std::list<int>  lst;
	
	lst.pushback(10);
	lst.pushback(23);
	lst.pushback(3);
	lst.pushback(17);
	lst.pushback(20);
	
	for_each(lst.begin(), lst.end(), displayInt);
	
	return (0);
}
```
> result

```shell
10
23
3
17
20
```

### resources