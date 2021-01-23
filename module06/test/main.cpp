//
// Created by qli on 23/01/2021.
//

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 15:23:58 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/24 15:23:58 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include <iostream>

int     detect_type(std::string literal)
{
	size_t i = 0;
	int char_present = 0;

	const char* pseudoliterals[] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for (int x = 0; x < 6; x++){
		if (pseudoliterals[x] == literal)
			return PSUEDO;
	}

	if (literal.length() == 1 && !isdigit(literal[0]))
		return CHAR;

	while (literal[i]) {
		if (isalpha(literal[i]))
			char_present++;
		if (literal[i] == '.') {
			i++;
			while (isdigit(literal[i])) {
				i++;
			}
			if (literal[i] == 'f' && i == (literal.length() - 1))
				return FLOAT;
			else if (!literal[i])
				return DOUBLE;
			else
				return FORMAT_ERROR;
		}
		if (literal[i] == 'f' && i == (literal.length() - 1))
			return FLOAT;
		if (char_present && i == (literal.length() - 1))
			return FLOAT;
		else if (!isdigit(literal[i]) && (i != 0 && (literal[i] == '+' || literal[i] == '-')))
			return FORMAT_ERROR;
		i++;
	}
	return INT;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Give one argument" << std::endl;
	else {
		int type = detect_type(argv[1]);
		if (type == -1)
			std::cout << "Format error" << std::endl;
		else {
			Convert convert_tool = Convert(argv[1]);
			void (Convert::*fptr[6])();
			fptr[0] = NULL;
			fptr[1] = &Convert::convert_char;
			fptr[2] = &Convert::convert_int;
			fptr[3] = &Convert::convert_float;
			fptr[4] = &Convert::convert_double;
			fptr[5] = &Convert::convert_psuedo;
			(convert_tool.*fptr[type])();
		}
	}
	return 0;
}
