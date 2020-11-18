/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:30:38 by qli           #+#    #+#                 */
/*   Updated: 2020/11/12 20:04:07 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {
	std::cout << "Constructor called" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	// it is possible to call a function from an instance pointer
	this->bar();
	return;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar(void) {
	std::cout << "Member function bar called" << std::endl;
	return;
}
