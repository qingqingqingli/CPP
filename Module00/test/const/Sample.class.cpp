/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 19:26:41 by qli           #+#    #+#                 */
/*   Updated: 2020/11/12 19:40:51 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

// it's not assigning f value to pi attribute
// it's initialising pi attribute to the f value
Sample::Sample(float const f) : pi(f), qd(42) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

// this is central to CPP
// define the const when your member function should never be changed in the
// current instance of your class
void	Sample::bar(void) const {

	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

	// this assignment below won't work, as it's a const function
	// this->qd = 0;
	return;
}
