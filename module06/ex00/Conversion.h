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

#define PRECISION 1
#define FLT_MIN -3.40282e+38
#define FLT_MAX 3.40282e+38

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */


class Conversion {

private:
	std::string _input;

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
	void convertToChar();
	void convertToInt();
	void convertToFloat();
	void convertToDouble();

};
