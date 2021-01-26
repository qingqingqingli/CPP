//
// Created by qli on 25/01/2021.
//
#include <iostream>
#include "Span.hpp"

int main(void)
{

	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
//		sp.addNumber(13);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	}
	catch (std::exception &exception) {

		std::cout << RED << exception.what() << RESET << std::endl;
	}


	return 0;
}

// 2
// 14