/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:42:47 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:42:47 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

// 3 parameters
// 1st: address of an array
// 2nd: length of the array
// 3rd: a function that is called on each element of the array

template<typename F>
void iterate(F f)
{

}

template<typename T, typename U>
void iter(T address, U arrayLen, iterate(T address))
{

}

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

class Awesome{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
