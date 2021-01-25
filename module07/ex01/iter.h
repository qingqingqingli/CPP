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

# define RESET			"\033[0m"
# define MAGENTA		"\033[35m"				/* Magenta */

template<typename T>
void iter(T *array, int n, void f(T const &array))
{
	for (int i = 0; i < n; i++)
		f(array[i]);
}

template<typename T>
void print( T const & x ) {
	std::cout << x << std::endl;
	return;
}

template<typename T>
void printInColor( T const & x ) {
	std::cout << MAGENTA << x << RESET << std::endl;
	return;
}
