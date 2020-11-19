/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 17:07:27 by qli           #+#    #+#                 */
/*   Updated: 2020/11/19 17:07:27 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.h"

int main()
{
	float weight0 = 20;
	std::string name0 = "Too little";

	float weight1 = 134.5;
	std::string name1 = "Good one";

	Pony::ponyOnTheStack(weight0, name0);
	std::cout << std::endl;
	Pony::ponyOnTheHeap(weight0, name0);
	std::cout << std::endl;
	Pony::ponyOnTheStack(weight1, name1);
	std::cout << std::endl;
	Pony::ponyOnTheHeap(weight1, name1);
	return 0;
}
