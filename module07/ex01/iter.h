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
#include "Awesome.hpp"

template<typename T>
void iterate(T array)
{
	for (int i = 0; i < strlen(array); i++)
		std::cout << array[i] << std::endl;
}

template<typename T>
void print( T const & x ) {
	std::cout << x << std::endl;
	return;
}

template<typename T>
void increase( T x ) {
	x = x + 10;
	std::cout << x << std::endl;
	return;
}

template<typename T>
void iter(T *array, int n, void print( T const & array ))
{
	for (int i = 0; i < n; i++)
		print(array[i]);
}

template<typename T>
void iter2(T *array, int n, void increase( T array ))
{
	for (int i = 0; i < n; i++)
		increase(array[i]);
}

template<typename T, typename U>
void iter3(T *array, int n, void *U())
{
	for (int i = 0; i < n; i++)
		U(array[i]);
}
