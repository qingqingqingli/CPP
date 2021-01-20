/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Conversion.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 16:30:11 by qli           #+#    #+#                 */
/*   Updated: 2021/01/20 16:30:11 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class Conversion {

private:
	std::string _input;
	char		_char;
	int			_int;
	float 		_float;
	double		_double;

public:
	explicit Conversion(std::string input="");
	~Conversion();
	Conversion(Conversion const & src);
	Conversion & operator=(Conversion const & rhs);

	std::string getInput();
	// input check
	bool checkChar();
	bool checkInt();
	bool checkFloat();
	bool checkDouble();
	bool checkInputType();

	// input convert

	bool saveInputToInt();


	void convertToChar();
	void convertToInt();
	void convertToFloat();
	void convertToDouble();

};
