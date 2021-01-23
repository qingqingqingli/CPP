/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:42:39 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:42:39 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>

template<typename T>

void swap(T & x, T & y)
{
	T z = x;
	x = y;
	y = z;
}

template<typename T>
T min(T & x, T & y)
{
	T ret = (x >= y) ? y : x;
	return ret;
}

template<typename T>
T max(T & x, T & y)
{
	T ret = (x <= y) ? y : x;
	return ret;
}

class Awesome
{
public:
	Awesome( int n ) : _n( n ) {}
	bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
	bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
	bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
	bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
	bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
	bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
	int getN() const {return this->_n;}
private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const & awesome) {
	return o << awesome.getN();
}
