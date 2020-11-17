/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 10:40:41 by qli           #+#    #+#                 */
/*   Updated: 2020/11/17 16:21:31 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int main(void)
{
	std::string		command;
	Phonebook		contact[8];

	while (1)
	{
		std::cout << BOLDYELLOW << "Enter your command: " << RESET;
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
			Phonebook::addContact(contact[Phonebook::getContactNb()]);
		else if (command.compare("SEARCH") == 0)
			Phonebook::searchContact(contact);
		else if (command.compare("EXIT") == 0)
			return (0);
		else
			std::cout << RED << "Please enter: ADD, SEARCH or EXIT" << RESET << std::endl;
	}
	return (0);
}
