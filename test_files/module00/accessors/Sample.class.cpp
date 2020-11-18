/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:30:38 by qli           #+#    #+#                 */
/*   Updated: 2020/11/12 21:53:54 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo() = " << this->getFoo() << std::endl;

	return;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

// grant only read-only access to the attribute
int		Sample::getFoo(void) const {
	// return a copy of the _foo attribute
	return this->_foo;
}

// this way allows the user to change the _foo attribute
void	Sample::setFoo(int v) {
	// don't allow _foo to have a negative value
	if (v >= 0)
		this->_foo = v;
	return;
}
