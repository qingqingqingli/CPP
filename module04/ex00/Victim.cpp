/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 13:50:09 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 13:50:09 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"

Victim::Victim(const std::string &name) : _name(name){
	std::cout << GREEN << "Some random victim called " << this->getName() << " just appeared!" << RESET << std::endl;
}

Victim::~Victim() {
	std::cout << RED << "Victim " << this->getName() << " just died for no apparent reason!" << RESET << std::endl;
}

Victim::Victim(const Victim &src) {
	std::cout << YELLOW << "<Victim> copy constructor is called." << RESET << std::endl;
	*this = src;
}

Victim &Victim::operator=(const Victim &rhs) {
	std::cout << YELLOW << "<Victim> assignation operator is called." << RESET << std::endl;
	if (this != &rhs) {
		this->_name = rhs.getName();
	}
	return *this;
}

std::string Victim::getName() const {
	return this->_name;
}

void Victim::announce() const {
	std::cout << CYAN << "I'm " << this->getName() << " and I like otters!" << RESET << std::endl;
}

std::ostream &operator<<(std::ostream & o, Victim const & victim) {
	o << victim.getName();
	return o;
}