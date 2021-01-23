/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 11:52:01 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/30 11:52:01 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include <float.h>
#include <iomanip>
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <climits>

Convert::Convert()
{

}

Convert::Convert(std::string literal) :
		_literal(literal), _char_overflow(false), _int_overflow(false), _float_overflow(false), _double_overflow(false)
{
	int i = 0;
	_precision = 0;

	while (literal[i]) {
		if (literal[i] == '.') {
			i++;
			while (isdigit(literal[i])) {
				_precision++;
				i++;
			}
		}
		i++;
	}
	if (!_precision)
		_precision = 1;
}

Convert::Convert(Convert const &src)
{
	*this = src;
}

Convert &		Convert::operator=(Convert const &rhs)
{
	if (this != &rhs) {
		this->_literal = rhs._literal;
		this->_precision = rhs._precision;
		this->_char_overflow = rhs._char_overflow;
		this->_int_overflow = rhs._int_overflow;
		this->_float_overflow = rhs._float_overflow;
		this->_double_overflow = rhs._double_overflow;
	}
	return (*this);
}

void    Convert::convert_char() {
	char char_value = _literal[0];
	print_char(char_value);
	print_int(static_cast<int>(char_value));
	print_float(static_cast<float>(char_value));
	print_double(static_cast<double>(char_value));
}

void    Convert::convert_int() {
	long double tmp = atof(_literal.c_str());
	if (tmp < INT_MIN || tmp > INT_MAX) {
		_char_overflow = true;
		_int_overflow = true;
		_float_overflow = true;
		_double_overflow = true;
	}
	else {
		int integer_value = atoi(_literal.c_str());
		print_char(static_cast<char>(integer_value));
		print_int(integer_value);
		print_float(static_cast<float>(integer_value));
		print_double(static_cast<double>(integer_value));
	}
}

void    Convert::convert_float() {
	long double tmp = atof(_literal.c_str());
	if (tmp < FLT_MIN || tmp > FLT_MAX) {
		_char_overflow = true;
		_int_overflow = true;
		_float_overflow = true;
		_double_overflow = true;
	}
	if (tmp < INT_MIN || tmp > INT_MAX)
		_int_overflow = true;
	else {
		float float_value = atof(_literal.c_str());
		print_char(static_cast<char>(float_value));
		print_int(static_cast<int>(float_value));
		print_float(float_value);
		print_double(static_cast<double>(float_value));
	}
}

void    Convert::convert_double() {
	long double tmp = atof(_literal.c_str());
	if (tmp < DBL_MIN || tmp > DBL_MAX) {
		_char_overflow = true;
		_int_overflow = true;
		_float_overflow = true;
		_double_overflow = true;
	}
	if (tmp < FLT_MIN || tmp > FLT_MAX)
		_float_overflow = true;
	if (tmp < INT_MIN || tmp > INT_MAX)
		_int_overflow = true;
	else {
		double double_value = atof(_literal.c_str());
		print_char(static_cast<char>(double_value));
		print_int(static_cast<int>(double_value));
		print_float(static_cast<float>(double_value));
		print_double(double_value);
	}
}

void    Convert::convert_psuedo()
{
	double f;
	if (_literal == "+inff" || _literal == "+inf")
		f = 1;
	else if (_literal == "-inff" || _literal == "-inf")
		f = 0;
	else
		f = 0;
	_char_overflow = true;
	_int_overflow = true;
	print_char(static_cast<char>(f));
	print_int(static_cast<int>(f));
	print_float(static_cast<float>(f));
	print_double(static_cast<double>(f));
}

void    Convert::print_char(char c)
{
	std::cout << "char: ";
	if (_char_overflow)
		std::cout << "Impossible" << std::endl;
	else if (!isprint(c))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << '\'' << c << '\'' << std::endl;
}

void    Convert::print_int(int i)
{
	std::cout << "int: ";
	if (_int_overflow)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << i << std::endl;
}

void    Convert::print_float(float f)
{
	std::cout << "FLT_MIN: " << FLT_MIN << std::endl;
	std::cout << "FLT_MAX: " << FLT_MAX << std::endl;
	std::cout << "float: ";
	if (_float_overflow)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(_precision) << f << "f" << std::endl;
}

void    Convert::print_double(double d)
{
	std::cout << "double: ";
	if (_double_overflow)
		std::cout << "Impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(_precision) << d << std::endl;
}

Convert::~Convert()
{

}
