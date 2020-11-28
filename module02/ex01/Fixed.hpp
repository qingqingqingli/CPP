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

#ifndef EX01_FIXED_HPP
#define EX01_FIXED_HPP

class Fixed {

private:
	int 				_fixedValue;
	static const int	_fracBits;

public:
	Fixed(void);
	Fixed(const int n); // convert it to the correspondent fixed(8) point value
	Fixed(const float f); // convert it to the correspondent fixed(8) point value
	~Fixed(void);

	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & rhs);

	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	float 	toFloat(void) const; // convert the fixed point value to a floating point value
	int		toInt(void) const; // convert the fixed point value to an integer value
};

// inserts a floating point representation of the fixed point value into the parameter output stream
std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif //EX01_FIXED_HPP
