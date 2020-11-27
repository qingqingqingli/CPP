## Table of content
- [New and delete](https://github.com/qingqingqingli/CPP/blob/main/wiki/module01.md#new-and-delete)
- [Stack vs heap memory](https://github.com/qingqingqingli/CPP/blob/main/wiki/module01.md#stack-vs-heap-memory)
- [References](https://github.com/qingqingqingli/CPP/blob/main/wiki/module01.md#references)
- [File streams](https://github.com/qingqingqingli/CPP/blob/main/wiki/module01.md#file-streams)
- [Pointers](https://github.com/qingqingqingli/CPP/blob/main/wiki/module01.md#pointers)
- [Lifetime](https://github.com/qingqingqingli/CPP/blob/main/wiki/module01.md#lifetime)
- [Scope](https://github.com/qingqingqingli/CPP/blob/main/wiki/module01.md#scope)
- [Constant class instance in another class](https://github.com/qingqingqingli/CPP/blob/main/wiki/module01.md#constant-class-instance-in-another-class)

### New and delete

- ```malloc()``` an object does not work in C++, because it does not call the constructor of the object. Similarly, if you ```free()``` an object, it also won't call the destructor
- ```new()``` and ```delete()``` use ```malloc()``` and ```free()``` in reality, but they also call the constructor and destructor in an appropriate way
- ```new()``` does not take parameters. So need to think of ways to initialise values

> Example 1: Initialise a variable on the stack and heap
```C++
#include <string>
#include <iostream>

class Student
{
	private:
		std::string _login;

	public:
		Student(std::string login) :_login(login)
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}

		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int main()
{
	Student		bob = Student("bfubar");
	Student*	jim = new Student("jfubar");

	// Do some stuff here

	delete jim; // jim is destroyed

	return (0); // bob is destroyed
}
```

> Result

```SHELL
Student bfubar is born
Student jfubar is born
Student jfubar died
Student bfubar died
```

> Example 2: Initialise an array of classes
```C++
#include <string>
#include <iostream>

class Student
{
	private:
		std::string _login;

	public:
		Student() :_login("ldefault")
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}

		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int main()
{
	Student*	students = new Student[5]; // new() does not take parameters

	// Do some stuff here

	delete [] students;

	return (0);
}
```

> Result

```SHELL
Student ldefault is born
Student ldefault is born
Student ldefault is born
Student ldefault is born
Student ldefault is born
Student ldefault died
Student ldefault died
Student ldefault died
Student ldefault died
Student ldefault died
```

### Stack vs heap memory

- Both of these memories locate in the RAM. The way the memory will be assigned is different

- **Stack**
	- Has predefined size (around 2GB)
	- When we want to use stack memory, the stack pointer moves and allocate the size of the memory that we want, and return the stack pointer. So the values we assign on stack will be close to each other and be assigned backwards. A stack memory allocation is one CPU instruction and very fast
	- Once the scope in which you allocated that stack memory ends, all the memory allocated in the stack will be reclaimed
	- Stack overflow happens when all the memory in the stack has been allocated, in which case further allocations begin overflowing into other sections of memory
	- If you can allocate on the stack, choose stack

- **Heap**
	- Has a predefined size but it can grow
	- Use ```new()``` keyword to allocate on the heap
	- Sequential memory requests may not result in sequential memory addresses being allocated
	- The heap allocated memory needs to be manually freed
	- Dynamically allocated memory must be accessed through a pointer. Dereferencing a pointer is slower than accessing a variable directly

``` C++
class Vector
{
	float x, y, z;
}

int main()
{
	//allocate on the stack
	int value = 5;
	int array[5];
	Vector vector;

	// allocate on the heap
	int* hvalue = new int;
	hvalue = 5;
	int* harray = new int[5];
	Vector* hvector = new Vector();

	// need to delete() all the new() allocation
	delete hvalue;
	delete[] harray;
	delete hvector;
}
```

### References

- References are aliases for existing variables. It is a pointer that is ```constant``` and always ```dereferenced``` and ```never void```

- References vs. pointer
	- You can't change where the reference is pointing to. It will always point to the same variable
	- You can't create a reference and let it point to nothing (uninitialised reference). Because it is constant, you can't point to something else later. But a reference can't point to nothing
	- Advantage: when you have a reference, you are sure that it's pointing to something
	- Reference is like a dereferenced pointer. So you don't need to add any symbol to access it

- References are complimentary to pointers but they don't replace pointers. However, you can't have a reference and not initialise it to something. In comparison, using a pointer, you can point it to something that does not exist in the beginning, and change what it points to later

- Pointers are more flexible than references. **If something should always exist and never change, use a references. But if it should not always exist and can change, use a pointer**

- Pointers and references are essentially the same thing, regarding how the computer will do with them

- **Reference**
	- A way for us to reference an existing variable. But pointer can be pointing to a non-existing address
	- References are not new variables. they don't really occupy memory or have storage
	- ```int&``` ref = a; & is part of the type. We actually created an alias
	- When you pass a value to a function, you are passing a copy of the value. For the destination function to change the value, you need to pass the memory address of that variable (using a reference or a pointer)
	- ```*value++```; Because of the order of operation, it will increment first and then dereference it. What's correct is to dereference first and increment it later - ```(*value)++```
	- If you can, use reference and it will make the source code looks cleaner
	- Once you define a reference, you can't change what a reference is

> Example: Simple usage of reference vs. pointer

```C++
#include <iostream>

int	main()
{
	int		numberOfBalls = 42;

	int*	ballsPtr = &numberOfBalls;
	int&	ballsRef = numberOfBalls;
	// the reference will be pointing to the variable
	// from this point on, you can't change what your reference is pointing to

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;

	return (0);
}
```

> result

```Shell
42 42 42
21
84
```

- **Passing parameters by reference**

> Example

```C++
#include <iostream>
#include <string>

void byPtr(std::string* str)
{
	*str += " and ponies";
}

void byConstPtr(std::string const * str)
{
	std::cout << *str << std::endl;
}

void byRef(std::string& str)
{
	str += " and ponies";
}

void byConstRef(std::string const & str)
{
	std::cout << str << std::endl;
}

int main()
{
	std::string str = "i like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return (0);
}
```

> Result

```shell
i like butterflies
i like butterflies and ponies
i like otters
i like otters and ponies
```

> Example: const reference and pointer

```C++
#include <iostream>
#include <string>

class Student
{
	private:
		std::string _login;

	public:
		Student(std::string const & login) : _login(login)
		{
		}

		std::string&	getLoginRef()
		{
			return this->_login;
		}

		std::string const & getLoginRefConst() const
		{
			return this->_login;
		}

		std::string*	getLoginPtr()
		{
			return &(this->_login);
		}

		std::string const * getLoginPtrConst() const
		{
			return &(this->_login);
		}
};

int main()
{
	Student 	bob = Student("bfubar");
	Student const jim = Student("jfubar");

	// use a const function on a non-const variable is not a problem
	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	return (0);
}
```

> Result

```shell
bfubar jfubar
bfubar jfubar
bobfubar
bobbyfubar
```

### File streams

- Streams that interact with files

- There are different ways to read from an input file stream (ifstream)
	- ifs.open();
	- strings > float directly from the buffer, line by line (need to understand more)

- There are also different types of streams, such as:
	- string streams
	- i string streams
	- o string streams

> Example

```C++
#include <iostream>
#include <fstream>

int main()
{
	//ifstream: input file stream
	std::ifstream	ifs("numbers");
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	//-------------------------
	//ofstream: output file stream
	std::ofstream	ofs("test.out");
	ofs << "i like ponies a whole damn lot" << std::endl;
	ofs.close();
	return (0);
}
```

> Result

```shell
# these come from the numbers from the numbers file
8 5
$ cat test.out
i like ponies a whole damn lot
```

### Pointers

- Pointers are extremely important for managing and manipulating memory

- **A pointer is an integer that stores a memory address**. It is the address of where that specific memory is.

- The types of that pointer do not matter. It only indicates the type of data that's presumably holding. It's something we write to make our lives easier syntatically. Type does not change what a pointer is

- Pointing to an invalid memory address (like 0) is perfectly fine for pointer

- When putting ```&``` before a variable, we are asking the address of that variable

- Dereferencing (*ptr) means accessing the data. In this way, you can write to or read from the data

- Pointers themselves are also variables and stored in memory

> Example: Pointer is an integer that holds a memory address

```C++
int main()
{
	// allocate 8 chars
	// point the pointer buffer to the beginning of the array
	char* buffer = new char[8];
	memset(buffer, 0, 8);

	// pointer to pointer
	char** ptr = &buffer;

	delete[] buffer;
	return (0)
}
```

### Lifetime

> [resource link](https://www.csee.umbc.edu/~chang/cs202.f15/Lectures/modules/m05-scope/slides.php?print)

Lifetime of a variable or object is the time period in which the variable/object has valid memory. It is also called ```allocation method``` and ```storage duration```.

- **Static**: A static variable is stored in the data segment of the "object file" of a program. Its lifetime is the entire duration of the program's execution.
- **Automatic**: An automatic variable has a lifetime that begins when program execution enters the function or statement block or compound, and ends when execution leaves the block. Automatic variables are stored in a "function call stack".
- **Dynamic**. The lifetime of a dynamic object begins when memory is allocated for the object (e.g., after calling ```malloc()``` or ```new()```), and ends when memory is deallocated (e.g., after calling ```free()``` or ```delete()```). Dynamic objects are stored in "the heap".  

### Scope

> [resource link](https://www.csee.umbc.edu/~chang/cs202.f15/Lectures/modules/m05-scope/slides.php?print)

C/C++ use lexical scoping. The scope of a declaration is the part of the program for which the declaration is in effect. 

- **Local scope**: visible within functions or statement block from point of declaration until the end of the block
- **Class scope**: seen by class members
- **Namespace scope**: visible within namespace block
- **File scope**: visible within current text file
- **Global scope**: visible everywhere unless "hidden"

### Constant class instance in another class

In a class, you can have a class attribute of another class. Defining it as ```constant``` means you can't modify it after initialization. 

To make sure the instance has the same lifetime as the class:
- If you declare the instance in the heap, you have to delete it at an appropriate time
- If you declare the instance in the stack, it's gonna die after leaving the scope 

### Destructor called without a constructor

> [Source link](https://stackoverflow.com/questions/28427119/why-destructor-is-being-called-but-construction-not-being-called-when-passing-ob)

- Passing an instance of a class by value invokes the copy constructor. The compiler implements the copy constructor by default if the class definition does not explicitly supply one.
- The compiler-generated copy constructor will not call one of the other constructors you've implemented. But the destructor will be invoked to clean up the copy when done.
- When you pass an instance to another function, when the function runs, it's added to the stack to process. A copy of the instance is sent to the stack, not the actual instance. Therefore, the system will use a copy constructor to create a copy and when the local copy is out of scope, the destructor will be called. However, in this case, the default constructor is not called.
- In order to actually change the original instance, you need to pass the instance with a pointer or a reference. So the function can actually access the location of the original instance and make change to that instance/data member. If such case exists, a decision needs to be made between a reference and a pointer

## File input and output

### Streams

- A stream is an abstract representation of an input device or an output device that is a sequential source or destination for data in your program. It is represented by a class type.
- You can visualize a stream as a sequence of bytes flowing between an external device and the main memory of your computer. You can write data to an ```output stream``` and read data from an ```input stream```; some streams provide the ability for both input and output
- In summary, all input and output is a sequence of bytes being read from, or written to, some external device
- When you read data from an external device, it's up to you to interpret the data correctly. You need to know the structure and type of data in advance, and read and interpret it accordingly

### Data transfer modes

- There are two modes for transferring data to and from a stream: text mode and binary mode. 
- In ```text``` mode, the data is interpreted as a sequence of characters that is usually organized as one or more lines terminated by the newline character ```'\n'```. Different systems interpret the newline character differently. In Unix system, it remains a single character
- In ```binary``` mode, there is no transformation of data. The original bytes are transferred between memory and the stream without conversion

### Text mode operations

- You can read and write various types of data using the extraction and insertion operators ```>>``` and ```<<```. These are formatted I/O operations that occur in text mode

### Advantages of using streams

- The primary reason for using streams for I/O operations is to make the code for the operations independent of the physical device.
	- You don't have to worry about the detailed mechanics of each device. They are all taken care of behind the scene
	- A program will work with a variety of disparate physical devices without necessitating changes to the source code

- The physical reality of an output stream can be any device to which a sequence of bytes can be transferred. File stream I/O will typically be to a file on a disk or on a solid state device.

- The standard library defines three standard output stream objects
	- ```std::cout``` : standard output stream
	- ```std::cerr``` : unbuffered standard error stream (data is written immediately to the output device)
	- ```std::clog``` : buffered standard error stream (data will only be written when the buffer is full)
	
- In principle, an input stream can be any serial source of data, but it's typically a disk file or the keyboard. 

### File streams

- There are three types of stream objects for working with files: ```ifstream```, ```ofstream```, and ```fstream```
    - These classes have istream, ostream, and iostream as base classes, respectively
    - An ```istream``` object represents a file input stream so you can only read it
    - An ```ofstream``` object represents a file output stream that you can only write to it
    - An ```fstream``` is a file stream that you can read or write
   
- You can associate a file stream object with a physical file when you create it. You can also create a file stream object that isn't assciated with a file, and then call a function member to establish the connection with a specific file

- In order to read or write a file, you must "open" the file; this attaches the file to your program via the operating system with a set of permissions that determine what you can do with it. If you create a file stream object with an initial association to a file, the file is opened and available for use immediately

- A file stream has some important properties. It has a ```length```, which corresponds to the number of characters in the stream; it has a ```beginning```, which is index position of the first character in the stream; and it has an ```end```, which is the index position one beyond the last character in the stream. It also has a ```current position```, which is the index position of the character in the stream where the next read or write operation will start. The ```first character``` in a file stream is at index position 0. These properties provide a way for you to move around a file to read the particular parts that you’re interested in or to overwrite selected areas of the file.

### Creating file objects

- Unlike the standard cin and cout objects, the input and output file objects must be created by the programmer
 


---
### Resources
- [fstream references](http://www.cplusplus.com/reference/fstream/)
- [iostream references](http://www.cplusplus.com/reference/iostream/)
- [sstream references](http://www.cplusplus.com/reference/sstream/)
- [stack vs heap memory in C++](https://www.youtube.com/watch?v=wJ1L2nSIV1s)
- [the stack and the heap](https://www.learncpp.com/cpp-tutorial/79-the-stack-and-the-heap/)
- [const keyword in C++](https://www.studytonight.com/cpp/const-keyword.php#)