/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/27 20:10:23 by qli           #+#    #+#                 */
/*   Updated: 2020/11/27 20:10:23 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {

private:
	int 				_fixedValue;
	static const int	_fracBits;

public:
	Fixed(void);
	~Fixed(void);

	Fixed(Fixed const & src);
	Fixed & operator=(Fixed const & rhs);

	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif //FIXED_HPP
