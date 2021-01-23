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
	iter( tab, 5, print );
	iter( tab2, 5, print );
	return 0;
}


//If everything went well, it should display:
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

