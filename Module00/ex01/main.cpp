/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 10:40:41 by qli           #+#    #+#                 */
/*   Updated: 2020/11/16 20:20:06 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.class.hpp"

int main(void)
{
	std::string		buf;
	Phonebook		contact[3];

	while (1)
	{
		std::cout << BOLDYELLOW << "Enter your command: " << RESET;
		std::getline(std::cin, buf);
		if (buf.compare("ADD") == 0)
			Phonebook::addContact(contact[Phonebook::getContactNb()]);
		else if (buf.compare("SEARCH") == 0)
			Phonebook::searchContact(contact);
		else if (buf.compare("EXIT") == 0)
			return 0;
		else
			std::cout << RED << "Please enter: ADD, SEARCH or EXIT" << RESET << std::endl;
	}
	return 0;
}
