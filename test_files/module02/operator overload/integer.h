//
// Created by qli on 28/11/2020.
//

#ifndef SAMPLE_INTEGER_H
#define SAMPLE_INTEGER_H
#include <iostream>

class Integer {
public:
	Integer(int const n);
	~Integer();

	int getValue() const;

	Integer & operator=(Integer const & rhs); //rhs = right hand side
	Integer operator+(Integer const & rhs) const;

private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, Integer const & rhs);

#endif //SAMPLE_INTEGER_H
