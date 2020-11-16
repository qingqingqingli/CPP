/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 10:40:45 by qli           #+#    #+#                 */
/*   Updated: 2020/11/16 20:19:01 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.class.hpp"

int Phonebook::_contactNb = 0;

Phonebook::Phonebook(void)
{
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

int Phonebook::getContactNb(void)
{
	return Phonebook::_contactNb;
}

void Phonebook::addContact(Phonebook &contact)
{

	if (Phonebook::_contactNb >= 3)
	{
		std::cout << RED << "The phonebook is full. No new contacts can be added. " << std::endl << RESET;
		return;
	}
	Phonebook::_contactNb += 1;
	std::cout << "Number of contact = " << Phonebook::_contactNb << std::endl;

	std::cout << BLUE << "Enter your FIRST NAME: ";
	std::getline(std::cin, contact._firstName);
	std::cout << RESET << "The FIRST NAME you entered is [" << BOLDBLUE << contact._firstName << RESET <<"]" << std::endl;

	std::cout << BLUE <<"Enter your LAST NAME: ";
	std::getline(std::cin, contact._lastName);
	std::cout << RESET << "The LAST NAME you entered is [" << BOLDBLUE << contact._lastName << RESET << "]" << std::endl;

	std::cout << BLUE << "Enter your NICKNAME: ";
	std::getline(std::cin, contact._nickname);
	std::cout << RESET << "The NICKNAME you entered is [" << BOLDBLUE << contact._nickname << RESET << "]" << std::endl;

	// std::cout << "Enter your LOGIN: ";
	// std::getline(std::cin, contact._login);
	// std::cout << "The LOGIN you entered is [" << contact._login << "]" << std::endl;

	// std::cout << "Enter your POSTAL ADDRESS: ";
	// std::getline(std::cin, contact._postalAddress);
	// std::cout << "The POSTAL ADDRESS you entered is [" << contact._postalAddress << "]" << std::endl;

	// std::cout << "Enter your EMAIL ADDRESS: ";
	// std::getline(std::cin, contact._emailAddress);
	// std::cout << "The EMAIL ADDRESS you entered is [" << contact._emailAddress << "]" << std::endl;

	// std::cout << "Enter your PHONE NUMBER: ";
	// std::getline(std::cin, contact._phoneNumber);
	// std::cout << "The PHONE NUMBER you entered is [" << contact._phoneNumber << "]" << std::endl;

	// std::cout << "Enter your BIRTHDAY DATE: ";
	// std::getline(std::cin, contact._birthdayDate);
	// std::cout << "The BIRTHDAY DATE you entered is [" << contact._birthdayDate << "]" << std::endl;

	// std::cout << "Enter your FAVORITE MEAL: ";
	// std::getline(std::cin, contact._favoriteMeal);
	// std::cout << "The FAVORITE MEAL you entered is [" << contact._favoriteMeal << "]" << std::endl;

	// std::cout << "Enter your UNDERWERA COLOR: ";
	// std::getline(std::cin, contact._underwearColor);
	// std::cout << "The UNDERWERA COLOR you entered is [" << contact._underwearColor << "]" << std::endl;

	// std::cout << "Enter your DARKEST SECRET: ";
	// std::getline(std::cin, contact._darkestSecret);
	// std::cout << "The DARKEST SECRET you entered is [" << contact._darkestSecret << "]" << std::endl;

	return;
}

void Phonebook::searchContact(Phonebook *contact)
{
	int			i = 0;
	std::string	index;

	if (Phonebook::getContactNb() == 0)
	{
		std::cout << RED << "No contact in the phonebook. Add a contact using ADD." << std::endl << RESET;
		return;
	}
	while (i < Phonebook::getContactNb())
	{
		std::cout << BLUE << i + 1 << "|" << contact[i]._truncateStr(contact[i]._firstName) << "|" \
		<< contact[i]._truncateStr(contact[i]._lastName) << "|" \
		<< contact[i]._truncateStr(contact[i]._nickname) << RESET << std::endl;
		i++;
	}
	std::cout << "Input the desired index: ";
	std::getline(std::cin, index);
	if (index[0] != '\0')
		i = index[0] - 48;
	if (index[0] == '\0' || index.length() > 1 || i > Phonebook::getContactNb())
		std::cout << RED << "Please input a valid index number. " << std::endl << RESET;
	else if (i <= Phonebook::getContactNb() && i > 0)
		contact[i - 1]._printContact(contact[i - 1]);
	return;
}

void Phonebook::_printContact(Phonebook contact)
{
	std::cout << RESET << "FIRST NAME : [" << BOLDBLUE << contact._firstName << RESET <<"]" << std::endl;
	std::cout << RESET << "LAST NAME : [" << BOLDBLUE << contact._lastName << RESET <<"]" << std::endl;
	std::cout << RESET << "NICKNAME : [" << BOLDBLUE << contact._nickname << RESET <<"]" << std::endl;
}

std::string Phonebook::_truncateStr(std::string string)
{
	std::string truncatedStr;

	if (string.length() > 10)
	{
		truncatedStr = string.substr(0, 10);
		truncatedStr[9] = '.';
		return truncatedStr;
	}
	return string;
}
