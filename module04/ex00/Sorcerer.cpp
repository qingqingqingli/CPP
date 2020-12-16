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
#include "Victim.hpp"

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

void Sorcerer::polymorph(const Victim & victim) const {
	victim.polymorph();
}

void Sorcerer::polymorph(const Peon & peon) const {
	peon.polymorph();
}

std::ostream &operator<<(std::ostream &o, const Sorcerer &sorcerer) {
	o << CYAN << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << RESET << std::endl;
	return o;
}
