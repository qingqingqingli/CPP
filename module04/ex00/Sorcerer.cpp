/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 13:49:28 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 13:49:28 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) :
_name(name), _title(title){

	std::cout << GREEN << this->getName() << ", " << this->getTitle() << ", is born!" << RESET << std::endl;
}

Sorcerer::~Sorcerer() {

	std::cout << RED << this->getName() << ", " << this->getTitle() << ", is dead. Consequences will never be the same!" << RESET << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &src) {

	std::cout << YELLOW << "<Sorcerer> copy constructor is called." << RESET << std::endl;
	*this = src;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &rhs) {

	std::cout << YELLOW << "<Sorcerer> assignation operator is called." << RESET << std::endl;

	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}
	return *this;
}

std::string Sorcerer::getName() const {

	return this->_name;
}

std::string Sorcerer::getTitle() const {

	return this->_title;
}

void Sorcerer::announce() const {

	std::cout << CYAN << "I am " << this->getName() << ", " << this->getTitle() << ", and I like ponies!" << RESET << std::endl;
}

std::ostream &Sorcerer::operator<<(std::ostream &o) const {

	o << CYAN << "I am " << this->getName() << ", " << this->getTitle() << ", and I like ponies!" << RESET << std::endl;
	return o;
}
