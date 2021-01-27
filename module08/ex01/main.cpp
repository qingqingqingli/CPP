/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 11:12:10 by qli           #+#    #+#                 */
/*   Updated: 2021/01/27 11:12:10 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Span.hpp"

int main(void)
{

	try	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.print();

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		// test with a big vector

		Span sp2 = Span(10000);
		sp2.fillVectorNumber();
		sp2.print();

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;

		std::cout << YELLOW << "---Test exception---" << RESET << std::endl;
		sp.addNumber(25);
	}

	catch (std::exception &exception) {

		std::cout << RED << exception.what() << RESET << std::endl;
	}
	return 0;
}

// 2
// 14