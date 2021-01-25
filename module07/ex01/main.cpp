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
	int tab1[] = {0, 1, 2, 3, 4 };
	Awesome tab2[5];
	char tab3[6] = "98765";
	std::string tab4[4] = {"how", "are", "you", "?"};

	std::cout << "--- print ---" << std::endl;
	iter(tab1, 5, print);
	iter(tab2, 5, print);
	iter(tab3, 5, print);
	iter(tab4, 4, print);

	std::cout << "--- print in color ---" << std::endl;
	iter(tab1, 5, printInColor);
	iter(tab2, 5, printInColor);
	iter(tab3, 5, printInColor);
	iter(tab4, 4, printInColor);

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
//9
//8
//7
//6
//5
//how
//are
//you
//?

