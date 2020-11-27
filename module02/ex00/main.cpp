/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 20:15:36 by qli           #+#    #+#                 */
/*   Updated: 2020/11/27 20:15:36 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void) {
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

// expected output

//./a.out
//Default constructor called
//Copy constructor called
//Assignation operator called // <-- This line may be missing depending on your implementation
//getRawBits member function called
//Default constructor called
//Assignation operator called
//getRawBits member function called
//getRawBits member function called
//0
//getRawBits member function called
//0
//getRawBits member function called
//0
//Destructor called
//Destructor called
//Destructor called