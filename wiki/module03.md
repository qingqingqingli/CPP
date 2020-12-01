## Table of content
- [inheritance]()

### inheritance introduction

- **Inheritance is the means by which you can create new classes by reusing and expanding on existing class definitions.**
- Inheritance is also fundamental to making ```polymorphism``` possible, and polymorphism is a basic feature of object-oriented programming.
- One class is derived from another by adding extra properties, by specialization and making the new class a specialized version of the more general class

### inheritance in classes

- A ```base class``` is also referred to as a ```superclass``` of a class that is derived from it and the ```derived class``` is a ```subclass``` of its base
- A derived class automatically contains all the data members of its base class, and (with some restrictions) all the function members. A derived class inherits the data members and function members of its base class

[![derived_class](https://github.com/qingqingqingli/CPP/blob/main/images/derived_class.png)](https://github.com/qingqingqingli/CPP/wiki/Module03)

### "is a" test and "has a" test

- Derived class objects should be ```sensible specialisations``` of base class objects. It means that a derived class should define a subset of the objects that are represented by the base class. 
- The ```"is a"``` test is an excellent first check, but it's not infallible. If classes fail the "is a" test, then you almost certainly shouldn't use class derivation. In this case, you could check the ```"has a"``` test


### key concepts to understand
- how to call the constructor from its parent
- how to make sure that destructors are called for both classes
- multiple inheritance
- different levels of encapsulation : public, private, protected

---
### resources