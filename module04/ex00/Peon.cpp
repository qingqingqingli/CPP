/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 13:50:48 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 13:50:48 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"

Peon::Peon() : Victim("peon"){
	std::cout << GREEN << "Zog Zog." << RESET << std::endl;
}

Peon::Peon(const std::string &name) : Victim(name){
	std::cout << GREEN << "Zog Zog." << RESET << std::endl;
}

Peon::~Peon() {
	std::cout << RED << "Bleuark..." << RESET << std::endl;
}

Peon::Peon(const Peon &src) : Victim("null"){
	std::cout << YELLOW << "<Peon> copy constructor is called." << RESET << std::endl;
	*this = src;
}

Peon &Peon::operator=(const Peon &rhs) {
	std::cout << YELLOW << "<Peon> assignation operator is called." << RESET << std::endl;
	if (this != &rhs) {
		this->_name = rhs.getName();
	}
	return *this;
}

void Peon::polymorph(void) const {
	std::cout << MAGENTA << this->getName() << " has been turned into a pink pony!" << RESET << std::endl;
}
