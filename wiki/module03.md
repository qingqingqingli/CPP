## Table of content
- [inheritance]()

### inheritance introduction

- **Inheritance is the means by which you can create new classes by reusing and expanding on existing class definitions.**
- Inheritance is also fundamental to making ```polymorphism``` possible, and polymorphism is a basic feature of object-oriented programming.
- One class is derived from another by adding extra properties, by specialization and making the new class a specialized version of the more general class

> Introduction
```C++
// base class
class Animal {
private:
	int _numberOfLegs;

public:
	Animal();
	Animal(Animal const &);
	Animal& operator=(Animal const &);
	~Animal();

	void run(int distance);
	void call();
	void eat(std::string const & what);
	void walk(int distance);
};

// It means that Cat is an animal
// public inheritance
class Cat : public Animal {

public:
	Cat();
	Cat(Cat const &);
	Cat& operator=(Cat const &);
	~Cat();

	void scornSomeone(std::string const & target);

};

class Pony : public Animal {

public:
	Pony();
	Pony(Pony const &);
	Pony& operator=(Pony const &);
	~Pony();

	void doMagic(std::string const & target);
	void run(int distance); // it will replace the animal function
};

// PROTECTED

class Quadruped { // Can access name, run() and legs

private:
	std::string name; // Only accessible from an Quadruped object

protected:
	Leg legs[4]; // Accessible from an Quadruped or derived object

public:
	void run(); // Accessible from wherever
};
```

### inheritance in classes

- A ```base class``` is also referred to as a ```superclass``` of a class that is derived from it and the ```derived class``` is a ```subclass``` of its base
- A derived class automatically contains all the data members of its base class, and (with some restrictions) all the function members. A derived class inherits the data members and function members of its base class

> base class and derived class 
[![derived_class](https://github.com/qingqingqingli/CPP/blob/main/images/derived_class.png)](https://github.com/qingqingqingli/CPP/wiki/Module03)

### "is a" test and "has a" test

- Derived class objects should be ```sensible specialisations``` of base class objects. It means that a derived class should define a subset of the objects that are represented by the base class. 
- The ```"is a"``` test is an excellent first check, but it's not infallible. If classes fail the "is a" test, then you almost certainly shouldn't use class derivation. In this case, you could check the ```"has a"``` test
- A class object passes the ```"has a"``` test if it contains an instance of another class. You can accommodate this by including an object to the second class as a data member of the first. For instance, an ```Automobile``` object would have an ```Engine``` object as a data member. This type of relationship is called ```aggregation```.

### base class access specifier
- It determines how the members of the base class can be accessed within the derived class


### key concepts to understand
- how to call the constructor from its parent
- how to make sure that destructors are called for both classes
- multiple inheritance
- different levels of encapsulation : public, private, protected

---
### resources