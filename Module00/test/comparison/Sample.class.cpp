/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:30:38 by qli           #+#    #+#                 */
/*   Updated: 2020/11/12 22:19:22 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int v) : _foo(v)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int		Sample::getFoo(void) const
{
	return this->_foo;
}

int		Sample::compare(Sample *other) const
{
	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	return (0);
}
