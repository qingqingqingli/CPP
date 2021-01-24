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

template<typename T>

void iterate(T array)
{
	for (int i = 0; i < strlen(array); i++)
		std::cout << array[i] << std::endl;
}

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

void iter(int *array, int n, void print( int const & array ))
{
	for (int i = 0; i < n; i++)
		print(array[i]);
}



class Awesome{
public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }
private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }


// int operation (int x, int y, int (*function)(int,int)){return function(x,y);}
// int operation2(int x, int y,std::function<int(int, int)> function){return function(x,y);}
