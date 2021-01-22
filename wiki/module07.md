## Table of contents
- []()
- []()
- []()


### From C - parametric macros

- macros have limitations with the edge effect

```C

#include <stdio.h>

int max_int (int x, int y) {return (x>=y ? x : y);}
float max_float (float x, float y) {return (x>=y ? x : y);}
char max_char (char x, char y) {return (x>=y ? x : y);}

int foo(int x) {printf("Long computing time\n"); return x; }

#define max(x, y) (((x) > = (y))? (x) : (y)) // parametric macro
// cpp (C pre-processor) will find all the defines
// when it has an edge effect, it can be messy

int main(void)
{
	int a = 21;
	int b = 42;
	
	printf("Max of %d and %d is %d\n", a, b, max_int(a, b));
    printf("Max of %d and %d is %d\n", a, b, max(a, b));

    float c = -1.7f;
    float d = 4.2f;
    
    printf("Max of %f and %f is %f\n", c, d, max_float(c, d));
    printf("Max of %f and %f is %f\n", c, d, max(c, d));

	char e = 'a';
	char f = 'b';

	printf("Max of %c and %c is %c\n", e, f, max_int(e, f));
	printf("Max of %c and %c is %c\n", e, f, max(e, f));
	
	//*but .....
	printf("Max of %d and %d is %d\n", a, b, max_int(foo(a), foo(b)));
	printf("Max of %d and %d is %d\n", a, b, max(foo(a), foo(b))); // it can be problematic when foo(a) executes twice after the macro is executed
	
	return (0);
}

```

- In C, ```void *``` is an option to take in different types of data. A lot of dereferencing is required when you run a big program, which can influence program performance

```C
struct list_s {
	void * content;
	size_t size; // needs to know the size to move 
	struct list * next;
} list_t;

list_t* list_new(void * content, size_t size);
void list_delete(list ** list);
```

### templates

- We need to ask the compiler to instantiate our template. There are two ways: explicit instantiation and implicit instantiation 

```C++

#include <iostream>

template<typername T> // tell the compiler that we're writing a template

T const & max(T const & x, T const & y) { // use the address and not a copy will save space
	return (x >= y? x : y); // apart from a scala type, it could also used with instances of class if they've implemented the operator overload
}

int foo(int x) {
	std::cout << "Long computing time" << std::endl;
	return x;
}

int main(void)
{
	int a = 21;
	int b = 42;
	
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl; // explicit instantiation -> this is preferred
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max(a, b) << std::endl; // implicit instantiation -> it might not work for complex classes

    float c = -1.7f;
    float d = 4.2f;
    
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max<float>(c, d) << std::endl; // explicit instantiation
    std::cout << "Max of " << c << " and " << d << " is ";
    std::cout << max(c, d) << std::endl; // implicit instantiation

	char e = 'a';
	char f = 'z';

	std::cout << "Max of " << e << " and " << f << " is ";
	std::cout << max<char>(e, f) << std::endl; // explicit instantiation
	std::cout << "Max of " << e << " and " << f << " is ";
    std::cout << max(e, f) << std::endl; // implicit instantiation
    
    // no problem here
    
    int ret = max<int>(foo(a), foo(b)); // explicit instantiation -> it will not be macros but actual functions, which are written by the compiler. So foo(a) and foo(b) will only be run once, and the results will be passed as parameters
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << ret << std::endl;
	
	return 0;
}

```

- Compilers can also write template for classes and structures. 

> template for structure

```C++
#include <iostream>

template<typename T>
class List {
	
public:
    List<T>(T const & content) { 
    	// etc...
    }
    
    List<T>(List<T> const & list) { 
    	//etc...
    }
    
    ~List<T>(void) {
        //etc...
    }
    
    //etc...

private:
	T * _content; // it works the same without *
    List<T> * _next;
};

/*******************************************************/

int main(void)
{
	List<int> a(42);
	List<float> b(3.14f);
	List<List<int>> c(a); // A list of list of integers
	
	//etc...
	
	return 0;
}
```

### default types

- `tpp` file can be used as a naming convention for templates

- ```Default type``` means if I don't tell you what the type is, the compiler can assume that it's this type

```C++

Template<typename T = float>
        
class Vertex {
public:
	Vertex (T const & x, T const & y, T const & z): _x(x), _y(y), _z(z) {}
	~Vertex(void){}
	
	T const & getx(void) const {return this->_x};
    T const & gety(void) const {return this->_y};
    T const & getz(void) const {return this->_z};
    
    // etc...
    
private:
	T const _x;
    T const _y;
    T const _z;
    
    Vertex(void);
};		

template<typename T>
std::ostream & operator<<(std::ostream & o, Vertex<T> const & v) {
	std::cout.precision(1);
	o << setiosflag(std::ios::fixed);
	o << "Vertex( ";
	o << v.getX() << ", ";
	o << v.getY() << ", ";
	o << v.getZ();
	o << " )";
	return o;
}

int main(void)
{
	Vertex<int> v1(12, 23, 34);
	Vertex<> v2(12, 23, 34);
	
	std::cout << v1 << std::endl;
    std::cout << v2 << std::endl;
    
    return 0;
}

```


### template specialization



### resources