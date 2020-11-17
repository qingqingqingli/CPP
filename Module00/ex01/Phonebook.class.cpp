/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 10:40:45 by qli           #+#    #+#                 */
/*   Updated: 2020/11/17 13:55:06 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int Phonebook::_contactNb = 0;

Phonebook::Phonebook(void){return;}

Phonebook::~Phonebook(void){return;}

int Phonebook::getContactNb(void){return Phonebook::_contactNb;}

void Phonebook::addContact(Phonebook &contact)
{
	if (Phonebook::_contactNb >= 3)
	{
		std::cout << RED << "The phonebook is full. No new contacts can be added. " << std::endl << RESET;
		return;
	}
	Phonebook::_contactNb += 1;
	std::cout << "You are adding an index number " << Phonebook::_contactNb << " contact." << std::endl;
	contact._requestInfo("FIRST NAME", contact._firstName);
	contact._requestInfo("LAST NAME", contact._lastName);
	contact._requestInfo("NICKNAME", contact._nickname);
	// add more fields later
	return;
}

void Phonebook::searchContact(Phonebook *contact)
{
	int			i = 0;
	std::string	index;

	if (Phonebook::getContactNb() == 0)
	{
		std::cout << RED << "No contact in the phonebook. Use ADD to add a contact first." << std::endl << RESET;
		return;
	}
	while (i < Phonebook::getContactNb())
	{
		std::cout << BLUE << "         " << i + 1 << "|";
		contact[i]._truncateInfo(contact[i]._firstName);
		std::cout << "|";
		contact[i]._truncateInfo(contact[i]._lastName);
		std::cout << "|";
		contact[i]._truncateInfo(contact[i]._nickname);
		std::cout << RESET << std::endl;
		i++;
	}
	std::cout << "Input the desired index: ";
	std::getline(std::cin, index);
	if (index.compare("") == 0)
		std::cout << RED << "Please enter a number between 1 and " << Phonebook::getContactNb() << std::endl << RESET;
	else
	{
		i = std::atoi(index.c_str());
		if (i > Phonebook::getContactNb() || i <= 0)
			std::cout << RED << "Please enter a number between 1 and " << Phonebook::getContactNb() << std::endl << RESET;
		else
			contact[i - 1]._printContact(contact[i - 1]);
	}
	return;
}

void Phonebook::_truncateInfo(std::string string)
{
	int	spaceNb = 10 - string.length();

	while (spaceNb > 0)
	{
		std::cout << " ";
		spaceNb--;
	}
	if (string.length() <= 10)
		std::cout << string;
	else
	{
		string.resize(9);
		std::cout << string << ".";
	}
}

void Phonebook::_printContact(Phonebook contact)
{
	std::cout << RESET << "FIRST NAME : [" << BOLDBLUE << contact._firstName << RESET <<"]" << std::endl;
	std::cout << RESET << "LAST NAME : [" << BOLDBLUE << contact._lastName << RESET <<"]" << std::endl;
	std::cout << RESET << "NICKNAME : [" << BOLDBLUE << contact._nickname << RESET <<"]" << std::endl;
	// to add more fields
}

void Phonebook::_requestInfo(std::string prompt, std::string &contactStr)
{
	std::cout << BLUE << "Enter your " << prompt << ": ";
	std::getline(std::cin, contactStr);
	std::cout << RESET << "The " << prompt << " you entered is [" << BOLDBLUE << contactStr << RESET <<"]" << std::endl;
}
