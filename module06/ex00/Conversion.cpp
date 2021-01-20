/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Conversion.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 16:30:06 by qli           #+#    #+#                 */
/*   Updated: 2021/01/20 16:30:06 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Conversion.h"
#include <climits>
#include <cstdio>
#include <cstdlib>

Conversion::Conversion(std::string input) : _input(input), _char(0), _int(0), _float(0), _double(0){

}

Conversion::~Conversion() {

}

Conversion::Conversion(const Conversion &src) {
	*this = src;
}

Conversion & Conversion::operator=(const Conversion &rhs) {
	if (this != &rhs)
		this->_input = rhs._input;
	return *this;
}

std::string Conversion::getInput() {
	return this->_input;
}

// -------- check input --------

bool Conversion::checkInputType() {
	if (!this->checkChar() && !this->checkInt() && !this->checkFloat() && !this->checkDouble())
		return false;
	else
		return true;
}

bool Conversion::checkChar() {

	std::string input = this->getInput();
	if (input.length() == 1)
	{
		if (!isprint(input.c_str()[0]))
		{
			std::cout << RED << "Do not process non-displayable char." << RESET << std::endl;
			return false;
		}
		return true;
	}
	return false;
}

bool Conversion::checkInt() {

	std::string input = this->getInput();
	size_t i = 0;
	if (input.c_str()[i] == '+' || input.c_str()[i] == '-' )
		i++;
	while (i < input.length())
	{
		if (isdigit(input.c_str()[i]))
			i++;
		else
			return false;
	}
	return true;
}

bool Conversion::checkFloat() {

	std::string input = this->getInput();
	size_t i = 0;
	size_t count = 0;
	if (input.c_str()[i] == '+' || input.c_str()[i] == '-' )
		i++;
	if (input.c_str()[input.length() - 1] != 'f')
		return false;
	while (i < input.length())
	{
		if (input.c_str()[i] == '.' && isdigit(input.c_str()[i+1]))
		{
			i++;
			count++;
		}
		else if (isdigit(input.c_str()[i]) || (input.c_str()[i] == 'f' && input.c_str()[i+1] == '\0'))
			i++;
		else
			return false;
	}
	if (count == 1)
		return true;
	return false;
}

bool Conversion::checkDouble() {

	std::string input = this->getInput();
	size_t i = 0;
	size_t count = 0;
	if (input.c_str()[i] == '+' || input.c_str()[i] == '-' )
		i++;
	while (i < input.length())
	{
		if (input.c_str()[i] == '.' && isdigit(input.c_str()[i+1]))
		{
			i++;
			count++;
		}
		else if (isdigit(input.c_str()[i]))
			i++;
		else
			return false;
	}
	if (count == 1)
		return true;
	return false;
}

// -------- save input ------
bool Conversion::saveInputToInt() {
	std::string input = this->getInput();
	char *endPtr = NULL;
	long int inputResult = strtol(input.c_str(), &endPtr, 10);
	if (inputResult > INT_MAX || inputResult < INT_MIN)
	{
		std::cout << "impossible";
		return false;
	}
	this->_int = static_cast<int>(inputResult);
	return true;
}

// ----------------------

void Conversion::convertToChar() {

	std::cout << "char: ";
	char *endPtr = NULL;
	long int inputResult = strtol(this->getInput().c_str(), &endPtr, 10);
	std::cout << RED << this->getInput().c_str() << std::endl;
	std::cout << RED << inputResult << std::endl;
	if (inputResult > 255 || inputResult < 0)
		std::cout << "impossible" << std::endl;
	else if (!isprint(static_cast<char>(inputResult)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(inputResult) << std::endl;
}

void Conversion::convertToInt() {
	std::cout << "int: ";
	char *endPtr = NULL;
	long int inputResult = strtol(this->getInput().c_str(), &endPtr, 10);
	if (inputResult > INT_MAX || inputResult < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(inputResult) << std::endl;
}

void Conversion::convertToFloat() {
	std::cout << "float: ";

	float f = static_cast<float>(this->getInput()[0] - 48);
	std::cout << f << ".0f";

	std::cout << std::endl;

}

void Conversion::convertToDouble() {
	std::cout << "double: ";

	double d = static_cast<double>(this->getInput()[0] - 48);
	std::cout << d << ".0";

	std::cout << std::endl;

}
