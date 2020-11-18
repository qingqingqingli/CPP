/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:30:38 by qli           #+#    #+#                 */
/*   Updated: 2020/11/13 11:29:03 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;
	return;
}

// With member function, CPP will pass as a parameter, an instance of your class
// so this-> can be used

// this pointer is not passed for a non member function, so you can't
// use this-> here
int	Sample::getNbInst(void)
{
	return Sample::_nbInst;
}

// this is the only way to initialise a non member attribute (static attribute)
// this is initialised without an instance being created
int	Sample::_nbInst = 0;
