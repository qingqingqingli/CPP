/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 13:18:53 by qli           #+#    #+#                 */
/*   Updated: 2020/11/21 13:18:53 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int main() {
	Human	bob;

	std::cout << bob.identify() << std::endl;
	std::cout << "------" << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return 0;
}
