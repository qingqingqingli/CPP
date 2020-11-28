/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 13:07:22 by qli           #+#    #+#                 */
/*   Updated: 2020/11/21 13:07:22 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(){

	std::string	str = "HI THIS IS BRAIN";

	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout << "strPtr is " << *strPtr << std::endl;
	std::cout << "strRef is " << strRef << std::endl;
	return 0;
}
