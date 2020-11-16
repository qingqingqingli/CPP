/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 10:40:45 by qli           #+#    #+#                 */
/*   Updated: 2020/11/16 18:12:39 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "constructor called" << std::endl;

	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "destructor called" << std::endl;
	return;
}

void Phonebook::addContact(Phonebook &contact)
{

	if (Phonebook::_contactNb >= 3)
	{
		std::cout << "The phonebook is full. No new contacts can be added. " << std::endl;
		return;
	}
	Phonebook::_contactNb += 1;
	std::cout << "addContact called" << std::endl;
	std::cout << "Number of contact = " << Phonebook::_contactNb << std::endl;

	std::cout << "Enter your FIRST NAME: ";
	std::getline(std::cin, contact._firstName);
	std::cout << "The FIRST NAME you entered is [" << contact._firstName << "]" << std::endl;

	std::cout << "Enter your LAST NAME: ";
	std::getline(std::cin, contact._lastName);
	std::cout << "The LAST NAME you entered is [" << contact._lastName << "]" << std::endl;

	std::cout << "Enter your NICKNAME: ";
	std::getline(std::cin, contact._nickname);
	std::cout << "The NICKNAME you entered is [" << contact._nickname << "]" << std::endl;

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
	int			i;
	std::string	index;
	std::string truncatedStr;

	i = 0;
	std::cout << "searchContact called" << std::endl;
	while (i < Phonebook::getContactNb())
	{
		if (contact[i]._firstName.length() > 10)
		{
			truncatedStr = contact[i]._firstName.substr(0, 10);
			truncatedStr[9] = '.';
		}
		std::cout << i + 1 << "|" << truncatedStr << "|" << contact[i]._lastName \
		<< "|" << contact[i]._nickname << std::endl;
		i++;
	}
	std::cout << "Input the desired index: ";
	std::getline(std::cin, index);

	return;
}

int Phonebook::getContactNb(void)
{
	return Phonebook::_contactNb;
}

int Phonebook::_contactNb = 0;
