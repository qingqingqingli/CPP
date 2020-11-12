/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:33:56 by qli           #+#    #+#                 */
/*   Updated: 2020/11/12 21:48:51 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;

	instance.setFoo(42);
	std::cout << "instance.getFoo() = " << instance.getFoo() << std::endl;
	instance.setFoo(-42);
	std::cout << "instance.getFoo() = " << instance.getFoo() << std::endl;

	return (0);
}
