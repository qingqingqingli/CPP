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

- Exceptions are an additional approach to signal errors or unexpected conditions in a program. 
  
- **Handling errors**. The quality of the error-handling code determines how robust a program is and it is usually a major factor in making a program user-friendly.
    - Not all errors are equal though the nature of the error determines how best to deal with it. 
    - Exceptions are to deal with error conditions that you don't expect to occur in the normal course of events. 
    - A primary advantage of using exceptions to signal these errors is that the *error-handling code is separated completely from the code that caused the error*
  
- **Exceptions need to be used exceptionally**. If you expect the function to fail often, you don't want to use exception, as calling exception is more resource consuming than returning an error value. 

- With ```catch```, you can catch a specific type of error messages. To catch any type of error message, you can use ```catch(...)``` to catch.

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
