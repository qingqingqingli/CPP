//
// Created by qli on 28/11/2020.
//

#include "Sample.h"

Sample::Sample(void) : _foo(0){
	std::cout << "Default constructor called" << std::endl;
}

Sample::Sample(const int n) : _foo(n) {
	std::cout << "Parametric constructor called" << std::endl;
}

Sample::Sample(const Sample &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Sample::~Sample() {
	std::cout << "Destructor called" << std::endl;
}

Sample &Sample::operator=(const Sample &rhs) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->_foo = rhs.getFoo();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Sample const & rhs){
	o << "The value of _foo is : " << rhs.getFoo();
	return o;
}

int Sample::getFoo(void) const {
	return this->_foo;
}
