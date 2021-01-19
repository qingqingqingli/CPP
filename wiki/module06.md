## Table of content

- [From C type conversion]()
- [From C type reinterpretation]()
- [From C type qualifier reinterpretation]()
- []()

### From C type conversion

- **Implicit conversion**: the compiler will cast for you
- **Explicit conversion**: you specify the type to cast  
- Double and floats are bigger and more accurate than integers. They are saved differently in bits
- Need to mindful with demotion. You always want to use an explicit cast to tell the compiler to convert correctly and do not lose any precision

```C

int main(void)
{
	int a = 42;
	
	double b = a; // implicit conversion cast
	double c = (double)a; // explicit conversion cast
	
	double d = a; // implicit promotion -> okay (no problem to move to a more generic type)
	int e = d; // implicit demotion -> not really okay
	int f = (int)d; // explicit demotion -> okay
}
```

### From C type reinterpretation

- Reinterpretation is about identity conversion. It doesn't reorganise the bits but interpret it in a different way. 
  
- There are hierarchies among the accuracy of the different data types: float > (more accurate than) int > (more accurate than) > void

```C
int main(void)
{
	float a = 420.042f; // reference value
	
	void * b = &a; // implicit reinterpretation cast
	void * c =  (void *) &a; // explicit reinterpretation cast
	
	void * d = &a; // implicit promotion -> okay (no problem to move to a more generic type)
	int * e = d; // implicit demotion -> not really okay
	int * f = (int *) d; // explicit demotion -> okay
}
```

### From C type qualifier reinterpretation

- There is no bit transformation
- Qualifiers include: const, auto

```C

int main(void)
{
	int a = 42; // reference value
	
	int const * b = &a; // implicit type qualifier cast
	int const * c = (int const *) &a; // explicit type qualifier cast
	
	int const * d = &a; // implicit promotion -> okay
	int * e = d; // implicit demotion -> not really okay
	int * f = (int *) d; // explicit demotion -> okay
}


```

### Upcast & downcast

- Downcast: From a pointer to a direct or indirect base type to a pointer to a derived type
- Upcast: 
- Crosscast: Cast across a hierarchy

### Static cast

- ```static_cast<type_to_convert_to>(expression)```

- ```static_cast``` keyword means that the cast is checked statically (when the code is compiled). 

- The effect of the cast is to convert the value that results from evaluating expression to the type that you specify between the angle brackets. The expression can be anything from a single variable to a complex expression involving lots of nested parentheses

- Generally, the need for explicit casts should be rare, particularly with basic types of data. If you have to include a lot of explicit conversion in your code, it's often a sign that you could choose more suitable types for your variables. 

### Dynamic cast

- ```dynamic cast``` means that the cast is checked dynamically (when the program is executing / performed at run time).

- You can only apply this operator to pointers and references to ```polymorphic class types```, which are class types that contain at least one virtual function. The reason is that only pointers to polymorphic class types contain the information that the dynamic_cast<>() operator needs to check the validity of the conversion.

### Reinterpret cast

### Const cast

- Very rarely, a function deals with a ```const``` object, either passed as an argument or the object pointed to by ```this```, and it is necessary to make it ```non-cast```. This maybe because you want to pass it as an argument to another function that has a non-const parameter. 

- ```const_cast<type>(expression)```

- The type of expression must be either ```const Type``` or the same as ```Type```. You should not use this operator to undermine the const-ness of an object. The only situations in which you should use it are those where you are sure the const nature of the object won’t be violated as a result.

### Cast operators

### Explicit keyword

### Converting between pointers to class objects

- You can implicitly convert a pointer to a derived class to a pointer to a base class, and you can do this for both direct and indirect base classes.

- A pointer to a class type can only point to objects of that type, or to objects of a derived class type

### The need for virtual destructors

- If the destructors are virtual, the destructor corresponding to the object type is called. So if a pointer points to a BrassPlus object, the BrassPlus destructor is called.And when a BrassPlus destructor finishes, it automatically calls the base-class constructor.Thus, using virtual destructors ensures that the correct sequence of destructors is called.

