/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/12 18:33:56 by qli           #+#    #+#                 */
/*   Updated: 2020/11/13 11:34:02 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void f0(void)
{
	Sample instance;

	std::cout << "Number of instances = " << instance.getNbInst() << std::endl;

	return;
}

void f1(void)
{
	Sample instance;

	std::cout << "Number of instances = " << instance.getNbInst() << std::endl;
	f0();

	return;
}

int main(void)
{
	std::cout << "Number of instances = " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances = " << Sample::getNbInst() << std::endl;

	return 0;
}
