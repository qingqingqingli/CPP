/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 10:40:41 by qli           #+#    #+#                 */
/*   Updated: 2020/11/18 15:32:30 by qli           ########  codam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int main(void)
{
	std::string		command;
	Phonebook		contact[8];

	while (command != "EXIT")
	{
		std::cout << BOLDYELLOW << "Enter your command: " << RESET;
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (1);
		}
		if (command == "ADD")
			Phonebook::addContact(contact[Phonebook::getContactNb()]);
		else if (command == "SEARCH")
			Phonebook::searchContact(contact);
		else
			std::cout << RED << "Please enter: ADD, SEARCH or EXIT" << RESET << std::endl;
	}
	return (0);
}
