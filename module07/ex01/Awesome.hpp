/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Awesome.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 09:57:28 by qli           #+#    #+#                 */
/*   Updated: 2021/01/25 09:57:28 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Awesome{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }

private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
