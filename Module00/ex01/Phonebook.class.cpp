/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 10:40:45 by qli           #+#    #+#                 */
/*   Updated: 2020/11/17 18:02:15 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int Phonebook::_contactNb = 0;

Phonebook::Phonebook(void)
{
	_firstName = "";
	_lastName = "";
	_nickname = "";
	_login = "";
	_postalAddress = "";
	_emailAddress = "";
	_phoneNumber = "";
	_birthdayDate = "";
	_favoriteMeal = "";
	_underwearColor = "";
	_darkestSecret = "";
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
	if (Phonebook::_contactNb >= 8)
	{
		std::cout << RED << "The phonebook is full. No new contacts can be added. " << std::endl << RESET;
		return;
	}
	Phonebook::_contactNb += 1;
	std::cout << "You are adding a contact of index no. " << Phonebook::_contactNb << std::endl;
	contact._requestInfo("FIRST NAME", contact._firstName);
	contact._requestInfo("LAST NAME", contact._lastName);
	contact._requestInfo("NICKNAME", contact._nickname);
	contact._requestInfo("LOGIN", contact._login);
	contact._requestInfo("POSTAL ADDRESS", contact._postalAddress);
	contact._requestInfo("EMAIL ADDRESS", contact._emailAddress);
	contact._requestInfo("PHONE NUMBER", contact._phoneNumber);
	contact._requestInfo("BIRTHDAY DATE", contact._birthdayDate);
	contact._requestInfo("FAVORITE MEAL", contact._favoriteMeal);
	contact._requestInfo("UNDERWEAR COLOR", contact._underwearColor);
	contact._requestInfo("DARKEST SECRET", contact._darkestSecret);
	return;
}

void Phonebook::searchContact(Phonebook *contact)
{
	int			i = 0;
	std::string	index = "";

	if (Phonebook::_EmptyPhonebook(contact) == -1)
		return;
	std::cout << BLUE << "     index|first name| last name|  nickname" << RESET << std::endl;
	while (i < Phonebook::getContactNb())
	{
		if (contact[i]._checkEmptyInfo(contact[i]))
		{
			std::cout << BLUE << "         " << i + 1 << "|";
			contact[i]._truncateInfo(contact[i]._firstName);
			std::cout << "|";
			contact[i]._truncateInfo(contact[i]._lastName);
			std::cout << "|";
			contact[i]._truncateInfo(contact[i]._nickname);
			std::cout << RESET << std::endl;
		}
		i++;
	}
	std::cout << "Input the desired index: ";
	std::getline(std::cin, index);
	if (index.empty())
		std::cout << RED << "Please SEARCH again and enter a valid index number. " << std::endl << RESET;
	else
	{
		i = std::atoi(index.c_str());
		if (i > 0 && i <= Phonebook::getContactNb() && contact[i - 1]._checkEmptyInfo(contact[i - 1]) != 0)
		{
			std::cout << BOLDBLUE << "CONTACT DETAIL" << RESET << std::endl;
			contact[i - 1]._printContact(contact[i - 1]);
		}
		else
			std::cout << RED << "Please SEARCH again and enter a valid index number. " << std::endl << RESET;
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
	return;
}

void Phonebook::_printContact(Phonebook contact)
{
	std::cout << BLUE << "FIRST NAME      : [" << contact._firstName <<"]" << RESET << std::endl;
	std::cout << BLUE << "LAST NAME       : [" << contact._lastName  <<"]" << RESET << std::endl;
	std::cout << BLUE << "NICKNAME        : [" << contact._nickname <<"]" << RESET << std::endl;
	std::cout << BLUE << "LOGIN           : [" << contact._login <<"]" << RESET << std::endl;
	std::cout << BLUE << "POSTAL ADDRESS  : [" << contact._postalAddress <<"]" << RESET << std::endl;
	std::cout << BLUE << "EMAIL ADDRESS   : [" << contact._emailAddress <<"]" << RESET << std::endl;
	std::cout << BLUE << "PHONE NUMBER    : [" << contact._phoneNumber <<"]" << RESET << std::endl;
	std::cout << BLUE << "BIRTHDAY DATE   : [" << contact._birthdayDate <<"]" << RESET << std::endl;
	std::cout << BLUE << "FAVORITE MEAL   : [" << contact._favoriteMeal <<"]" << RESET << std::endl;
	std::cout << BLUE << "UNDERWEAR COLOR : [" << contact._underwearColor <<"]" << RESET << std::endl;
	std::cout << BLUE << "DARKEST SECRET  : [" << contact._darkestSecret <<"]" << RESET << std::endl;
	return;
}

void Phonebook::_requestInfo(std::string prompt, std::string &contactStr)
{
	std::cout << BLUE << "Enter your " << BOLDBLUE << prompt << ": ";
	std::getline(std::cin, contactStr);
	std::cout << RESET << "The " << prompt << " you entered is [" << BOLDBLUE << contactStr << RESET <<"]" << std::endl;
	return;
}

int Phonebook::_EmptyPhonebook(Phonebook *contact)
{
	int	i = 0;
	int	emptyContact = 0;

	if (Phonebook::getContactNb() == 0)
	{
		std::cout << RED << "No contact in the phonebook. Use ADD to add a contact first." << std::endl << RESET;
		return (-1);
	}
	while (i < Phonebook::getContactNb())
	{
		if (contact[i]._checkEmptyInfo(contact[i]))
			emptyContact = 1;
		i++;
	}
	if (!emptyContact)
	{
		std::cout << RED << "No non-empty contact in the phonebook. Use ADD to add a valid contact first." << std::endl << RESET;
		return (-1);
	}
	return (0);
}

int Phonebook::_checkEmptyInfo(Phonebook contact)
{
	if (contact._firstName.empty() && contact._lastName.empty() \
	&& contact._nickname.empty() && contact._login.empty() \
	&& contact._postalAddress.empty() && contact._emailAddress.empty() \
	&& contact._phoneNumber.empty() && contact._birthdayDate.empty() \
	&& contact._favoriteMeal.empty() && contact._underwearColor.empty() \
	&& contact._darkestSecret.empty())
		return (0);
	return (1);
}
