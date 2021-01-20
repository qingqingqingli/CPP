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
#include <ctype.h>
#include "Conversion.h"
#include <limits.h>

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

void Conversion::convertToChar() {

	std::cout << "char: ";

	char c = static_cast<char>(this->getInput()[0] - 48);
	if (!isprint(c))
		std::cout << "Non displayable";
	else
		std::cout << c;

	std::cout << std::endl;
}

void Conversion::convertToInt() {
	std::cout << "int: ";

	int i = static_cast<int>(this->getInput()[0] - 48);
	std::cout << i;

	std::cout << std::endl;

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

bool Conversion::checkChar() {

	std::string input = this->getInput();
	size_t i = 0;
	size_t count = 0;
	char c = 0;
	while (i < input.length())
	{
		if (isalpha(input.c_str()[i]))
		{
			if (!isprint(input.c_str()[i]))
			{
				std::cout << RED << "Do not process non-displayable char." << RESET << std::endl;
				return false;
			}
			i++;
			count++;
		}
		else if (isspace(input.c_str()[i]))
			i++;
		else
			return false;
	}
	if (count == 1)
		return true;
	return false;
}

bool Conversion::checkInt() {

	std::string input = this->getInput();
	size_t i = 0;
	while(isspace(input.c_str()[i]))
		i++;
	if (input.c_str()[i] == '+' || input.c_str()[i] == '-' )
		i++;
	while (i < input.length())
	{
		if (isdigit(input.c_str()[i]))
			i++;
		else if (isspace(input.c_str()[i]))
			break;
		else
			return false;
	}
	while (i < input.length())
	{
		if (!isspace(input.c_str()[i]))
			return false;
		i++;
	}
	return true;
}

bool Conversion::checkFloat() {

	std::string input = this->getInput();
	size_t i = 0;
	size_t count = 0;
	while(isspace(input.c_str()[i]))
		i++;
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
		else if (input.c_str()[i] == 'f')
			break;
		else
			return false;
	}
	i++;
	while (i < input.length())
	{
		if (!isspace(input.c_str()[i]))
			return false;
		i++;
	}
	if (count == 1)
		return true;
	return false;
}

bool Conversion::checkDouble() {

	std::string input = this->getInput();
	size_t i = 0;
	size_t count = 0;
	while(isspace(input.c_str()[i]))
		i++;
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
		else if (isspace(input.c_str()[i]))
			break;
		else
			return false;
	}
	while (i < input.length())
	{
		if (!isspace(input.c_str()[i]))
			return false;
		i++;
	}
	if (count == 1)
		return true;
	return false;
}

bool Conversion::checkInputType() {
	if (!this->checkChar() && !this->checkInt() && !this->checkFloat() && !this->checkDouble())
		return false;
	else
		return true;
}

