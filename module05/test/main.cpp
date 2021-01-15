//
// Created by qli on 15/01/2021.
//

#include <string>
#include <iostream>


class Base {
public:
	Base() {
		std::cout << "Base constructor." << std::endl;
	}

	virtual ~Base() {
		std::cout << "Base Destructor Called" << std::endl;
	}

	virtual void    print() const {};

};


class Derived : public Base {

public:
	Derived() : Base(), _test(new std::string("test")) {}

	virtual ~Derived() {
		delete this->_test;
		std::cout << "Derived Destructor Called" << std::endl;
	}

	virtual void    print() const {
		std::cout << "Derived" << std::endl;
	}

private:
	const std::string*    _test;
};

int        main() {

	Base*    instances = new Derived[10]();

	std::cout << sizeof(Base) << std::endl;
	std::cout << sizeof(Derived) << std::endl;

	for (size_t i=0; i < 10; i++) {
		static_cast<Derived *>(instances)[i].print();
	}

	delete[] static_cast<Derived *>(instances);
	return 0;
}

//int    main() {
//
//	Base*    instances = new Derived[10];
//
//	for (size_t i=0; i < 10; i++) {
//		instances[i].print();
//	}
//
//	delete[] instances;
//	return 0;
//}
