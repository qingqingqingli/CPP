/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 16:30:02 by qli           #+#    #+#                 */
/*   Updated: 2021/01/20 16:30:02 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.h"

int main(int argc, char** argv)
{
	if (argc == 1)
		std::cout << RED << "Not enough argument." << RESET << std::endl;
	else if (argc > 2)
		std::cout << RED << "Too many arguments." << RESET << std::endl;
	else
	{
		Conversion conversion(argv[1]);
		if (!conversion.checkInputType())
		{
			std::cout << RED << "Please enter one of the following scala types: char, int, float or double." << RESET << std::endl;
			return 0;
		}

		conversion.convertToChar();
		conversion.convertToInt();
		conversion.convertToFloat();
		conversion.convertToDouble();
	}
	return 0;
}

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0
//
// ./convert " "
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0
//
// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan
//
// ./convert 42.0f
// char:'*'
// int: 42
// float: 42.0f
// double: 42.0

// ./convert 2147483647
// char: impossible
// int: 2147483647
// float: 2147483647.0f
// double: 2147483647.0

// ./convert 2147483648
// char: impossible
// int: impossible
// float: 21474836478.0f
// double: 21474836478.0

// ./convert ~
// char: ~
// int: 126
// float: 126.0f
// double: 126.0

