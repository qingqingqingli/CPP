## Table of contents
- [Nested classes]()
- [Exceptions]()

### Nested classes

> Example

```C++
class Cat
{
public:
    class Leg
    {
          //[...]  
    };
};

int main()
{
	Cat somecat; // instantiate the Cat class
	Cat::Leg somecatsleg; // instantiate the Leg class
}
```

### Exceptions

- It is a new way of handling errors. This needs to be used exceptionally. If you expect the function to fail often, you don't want to use exception, as calling exception is more resource consuming than returning an error value. 

- **Catch exception by reference**: 

> Example

```C++
#include <stdexcept>

void test1()
{
	try
    {
        // Do some stuff here
        if (/*there is an error*/)
        {
            throw std::exception();        
        }
        else
        {
        	// Do some more stuff
        }
    }
	catch (std::exception e)
	{
	    // handle the error here	
    }
}

void test2()
{
    // Do some stuff here
    if (/*there is an error*/)
    {
        throw std::exception();	
    }
    else
    {
    	// Do some other stuff
    }
}

void test3()
{
    try
    {
    	test2();
    }
    catch (std::exception& e) // catch exception by reference
    {
    	// handle error
    }	
}

void test4()
{
    class PEBKACException: public std::exception
    {
    	public:
    	    virtual const char* what() const throw() // understand better
            {
                return ("Problem exists between keyboard and chair");                  
            }
    };	
    try
    {
    	test3();
    }
    catch (PEBKACException& e) // specific catch
    {
    	// handle the fact that the user did something stupid
    }
    catch (std::exception& e) // generic catch
    {
    	// handle other exceptions that are like std::exception
    }	
}
```
