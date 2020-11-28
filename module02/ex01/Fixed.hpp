/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 20:32:28 by qli           #+#    #+#                 */
/*   Updated: 2020/11/27 20:32:28 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

# define RESET			"\033[0m"
# define BLACK			"\033[30m"				/* Black */
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */
# define WHITE			"\033[37m"				/* White */
# define BOLDBLACK		"\033[1m\033[30m"		/* Bold Black */
# define BOLDRED		"\033[1m\033[31m"		/* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"		/* Bold Green */
# define BOLDYELLOW		"\033[1m\033[33m"		/* Bold Yellow */
# define BOLDBLUE		"\033[1m\033[34m"		/* Bold Blue */
# define BOLDMAGENTA	"\033[1m\033[35m"		/* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"		/* Bold Cyan */
# define BOLDWHITE		"\033[1m\033[37m"		/* Bold White */

class Fixed {

private:
	int 				_fixedValue;
	static const int	_fracBits;

public:
	Fixed(void); // no value given yet
	Fixed(const int n); // convert int to fixed(8) point value
	Fixed(const float f); // convert float to fixed(8) point value
	~Fixed(void);

	Fixed(Fixed const & src); // copy constructor
	Fixed & operator=(Fixed const & rhs); // assignation constructor

	int 	getRawBits(void) const;
	void	setRawBits(int const raw); // when this one needs to be used
	float 	toFloat(void) const; // convert the fixed point value to a floating point value
	int		toInt(void) const; // convert the fixed point value to an integer value
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif //FIXED_HPP
