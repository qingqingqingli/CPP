
#pragma once
#include <iostream>

class Awesome{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
	Awesome & operator+(int i) {
		this->_n += i;
		return *this;
	}
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
