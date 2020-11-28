//
// Created by qli on 28/11/2020.
//

#ifndef CANONICAL_SAMPLE_H
#define CANONICAL_SAMPLE_H
#include <iostream>

class Sample {
public:
	Sample(void);								//Canonical form
	Sample(const int n);
	Sample(Sample const & src);					//Canonical form copy constructor
	~Sample(void);								//Canonical form

	Sample & operator=(Sample const & rhs);		//Canonical form

	int getFoo(void) const;

private:
	int _foo;
};

std::ostream & operator<<(std::ostream & o, Sample const & i);

#endif //CANONICAL_SAMPLE_H
