/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 10:40:47 by qli           #+#    #+#                 */
/*   Updated: 2020/11/16 17:30:19 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Phonebook {

private:

	std::string 	_firstName;
	std::string 	_lastName;
	std::string 	_nickname;
	std::string 	_login;
	std::string 	_postalAddress;
	std::string 	_emailAddress;
	std::string 	_phoneNumber;
	std::string 	_birthdayDate;
	std::string 	_favoriteMeal;
	std::string 	_underwearColor;
	std::string 	_darkestSecret;
	static int		_contactNb;

public:
	static void		addContact(Phonebook &contact);
	static void		searchContact(Phonebook *contact);
	static int		getContactNb(void);

	Phonebook(void);
	~Phonebook(void);
};

#endif
