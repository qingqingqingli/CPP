/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:33:56 by qli           #+#    #+#                 */
/*   Updated: 2020/11/12 20:08:47 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo = " << instance.publicFoo << std::endl;
	// it will give compilation error when you want to access private attributes
	// instance._privateFoo = 42;
	// std::cout << "instance._privateFoo = " << instance._privateFoo << std::endl;

	instance.publicBar();
	// it will give compilation error when you want to access private function
	// instance._privateBar();

	return (0);
}
