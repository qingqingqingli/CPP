/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 10:40:41 by qli           #+#    #+#                 */
/*   Updated: 2020/11/16 18:09:49 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.class.hpp"

int main(void)
{
	std::string	buf;
	Phonebook	contact[3];

	while (1)
	{
		std::cout << "Enter your command: ";
		std::getline(std::cin, buf);
		if (buf.compare("ADD") == 0)
			Phonebook::addContact(contact[Phonebook::getContactNb()]);
		else if (buf.compare("SEARCH") == 0)
			Phonebook::searchContact(contact);
		else if (buf.compare("EXIT") == 0)
			break;
		else
			std::cout << "Please enter: ADD, SEARCH or EXIT" << std::endl;
	}

	return 0;
}
