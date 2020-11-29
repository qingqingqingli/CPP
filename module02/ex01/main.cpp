/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 20:33:05 by qli           #+#    #+#                 */
/*   Updated: 2020/11/27 20:33:05 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void){
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}

// expected output

//Default constructor called
//Int constructor called
//Float constructor called
//Copy constructor called
//Assignation operator called
//Float constructor called
//Assignation operator called
//Destructor called
//a is 1234.43
//b is 10
//c is 42.4219
//d is 10
//a is 1234 as integer
//b is 10 as integer
//c is 42 as integer
//d is 10 as integer
//Destructor called
//Destructor called
//Destructor called
//Destructor called