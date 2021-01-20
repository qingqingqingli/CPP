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
#include <climits>
#include "Conversion.h"

int main(int argc, char** argv)
{
	if (argc == 1)
		std::cout << RED << "Not enough argument." << RESET << std::endl;
	else if (argc > 2)
		std::cout << RED << "Too many arguments." << RESET << std::endl;
	else
	{
//		double dd = 787878787878787;
//
//		float f = 42.44f;
//		double d = 42.44444444533333333331;
//		std::cout << f << std::endl;
//		std::cout << d << std::endl;
//		std::cout << static_cast<int>(dd) << std::endl;

		// check input type
		Conversion conversion(argv[1]);
		if (!conversion.checkInputType())
		{
			std::cout << RED << "Please enter one of the following scala types: char, int, float or double." << RESET << std::endl;
			return 0;
		}

		// save input type to the required type
		conversion.convertToChar();
//		std::cout << "INT_MAT: [" << INT_MAX << "]" << std::endl;
//		std::cout << "INT_MIN: [" << INT_MIN << "]" << std::endl;
//		conversion.convertToInt();
	}
	return 0;
}

//		if (conversion.checkChar())
//			std::cout << "char : " << conversion.getInput() << std::endl;
//		else if (conversion.checkInt())
//			std::cout << "int : " << conversion.getInput() << std::endl;
//		else if (conversion.checkFloat())
//			std::cout << "float : " << conversion.getInput() << std::endl;
//		else if (conversion.checkDouble())
//			std::cout << "double : " << conversion.getInput() << std::endl;

// Examples
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