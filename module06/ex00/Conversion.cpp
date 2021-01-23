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
#include "Conversion.h"
#include <cstdlib>
#include <cmath>
#include <cerrno>
#include <limits>
#include <iomanip>
#include <cfloat>

Conversion::Conversion(std::string input) : _input(input){

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
	if (!this->checkInt() && !this->checkFloat() && !this->checkDouble() && !this->checkChar())
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

	if (this->getInput() == "-inff" || this->getInput() == "+inff" || this->getInput() == "nanf")
		return true;

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

	if (this->getInput() == "-inf" || this->getInput() == "+inf" || this->getInput() == "nan")
		return true;

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

// ----------CONVERT INPUT ------------

void Conversion::convertToChar() {

	std::cout << "char: ";

	if (this->getInput() == "-inf" || this->getInput() == "+inf" || this->getInput() == "nan" ||\
	this->getInput() == "-inff" || this->getInput() == "+inff" || this->getInput() == "nanf")
		std::cout << "impossible" << std::endl;
	else if (this->getInput().length() == 1 && !isdigit(this->getInput().c_str()[0]))
	{
		if (!isprint(this->getInput().c_str()[0]))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << static_cast<char>(this->getInput().c_str()[0]) << std::endl;
	}
	else
	{
		char *endPtr = NULL;
		double inputResult = strtod(this->getInput().c_str(), &endPtr);
		if ((errno == ERANGE && (inputResult == -HUGE_VAL || inputResult == HUGE_VAL)) \
		|| inputResult > 255 || inputResult < 0)
			std::cout << "impossible" << std::endl;
		else if (!isprint(static_cast<char>(inputResult)))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << static_cast<char>(inputResult) << std::endl;
	}
}

void Conversion::convertToInt() {
	std::cout << "int: ";

	if (this->getInput() == "-inf" || this->getInput() == "+inf" || this->getInput() == "nan" ||\
	this->getInput() == "-inff" || this->getInput() == "+inff" || this->getInput() == "nanf")
		std::cout << "impossible" << std::endl;
	else if (this->getInput().length() == 1 && !isdigit(this->getInput().c_str()[0]))
		std::cout << static_cast<int>(this->getInput().c_str()[0]) << std::endl;
	else
	{
		char *endPtr = NULL;
		double inputResult = strtod(this->getInput().c_str(), &endPtr);
		if ((errno == ERANGE && (inputResult == -HUGE_VAL || inputResult == HUGE_VAL)) \
		|| inputResult > std::numeric_limits<int>::max() || inputResult < std::numeric_limits<int>::min())
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(inputResult) << std::endl;
	}
}

void Conversion::convertToFloat() {
	std::cout << "float: ";

	if (this->getInput() == "-inf" || this->getInput() == "+inf" || this->getInput() == "nan")
		std::cout << this->getInput() << "f" << std::endl;
	else if (this->getInput() == "-inff" || this->getInput() == "+inff" || this->getInput() == "nanf")
		std::cout << this->getInput() << std::endl;
	else if (this->getInput().length() == 1 && !isdigit(this->getInput().c_str()[0]))
		std::cout << std::setprecision(1) << std::fixed << static_cast<float>(this->getInput().c_str()[0]) << "f" << std::endl;
	else
	{
		char *endPtr = NULL;
		double inputResult = strtod(this->getInput().c_str(), &endPtr);
		if ((errno == ERANGE && (inputResult == -HUGE_VAL || inputResult == HUGE_VAL)) && inputResult < FLT_MIN && inputResult > FLT_MAX)
			std::cout << "impossible" << std::endl;
		else
			std::cout << std::setprecision(PRECISION) << std::fixed << static_cast<float>(inputResult) << "f" << std::endl;
	}
}

void Conversion::convertToDouble() {
	std::cout << "double: ";

	if (this->getInput() == "-inf" || this->getInput() == "+inf" || this->getInput() == "nan")
		std::cout << this->getInput() << std::endl;
	else if (this->getInput() == "-inff" || this->getInput() == "+inff" || this->getInput() == "nanf")
		std::cout << this->getInput().substr(0, this->getInput().length() - 1) << std::endl;
	else if (this->getInput().length() == 1 && !isdigit(this->getInput().c_str()[0]))
		std::cout << std::setprecision(PRECISION) << std::fixed << static_cast<double>(this->getInput().c_str()[0]) << std::endl;
	else
	{
		char *endPtr = NULL;
		double inputResult = strtod(this->getInput().c_str(), &endPtr);
		if (errno == ERANGE && (inputResult == -HUGE_VAL || inputResult == HUGE_VAL))
			std::cout << "impossible" << std::endl;
		else
			std::cout << std::setprecision(PRECISION) << std::fixed << inputResult << std::endl;
	}
}