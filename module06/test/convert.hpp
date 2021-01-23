/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/30 11:38:24 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/30 11:38:24 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_CLASS_H
#define CONVERT_CLASS_H
#include <string>

#define CHAR 1
#define INT 2
#define FLOAT 3
#define DOUBLE 4
#define PSUEDO 5
#define FORMAT_ERROR -1

class Convert
{

private:
	Convert();
	std::string _literal;
	int         _precision;
	bool        _char_overflow;
	bool        _int_overflow;
	bool        _float_overflow;
	bool        _double_overflow;

public:
	Convert(std::string literal);
	Convert(Convert const &src);
	~Convert();

	Convert & operator=(Convert const &rhs);

	void convert_char();
	void convert_int();
	void convert_float();
	void convert_double();
	void convert_psuedo();

	void print_char(char c);
	void print_int(int i);
	void print_float(float f);
	void print_double(double d);
};

#endif
