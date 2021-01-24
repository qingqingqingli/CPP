/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 18:42:50 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 18:42:50 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	char tab3[10] = "987654321";

	std::cout << "--- print ---" << std::endl;
	iter( tab, 5, print );
	iter( tab2, 5, print );
	iter( tab3, 9, print );

	std::cout << "--- increment ---" << std::endl;
	iter2( tab, 5, increase );
	iter2( tab2, 5, increase );
	iter2( tab3, 9, increase );

	std::cout << "--- print ---" << std::endl;
	iter3( tab, 5, print );
	iter3( tab2, 5, print );
	iter3( tab3, 9, print );

	std::cout << "--- increment ---" << std::endl;
	iter3( tab, 5, increase );
	iter3( tab2, 5, increase );
	iter3( tab3, 9, increase );
	return 0;
}


//0
//1
//2
//3
//4
//42
//42
//42
//42
//42

