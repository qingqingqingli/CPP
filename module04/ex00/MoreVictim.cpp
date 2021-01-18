/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MoreVictim.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 09:30:29 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 09:30:29 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MoreVictim.hpp"
#include <iostream>

MoreVictim::MoreVictim(const std::string &name) : Victim(name){
	std::cout << GREEN << "MoreVictim arrived." << RESET << std::endl;
}

MoreVictim::~MoreVictim() {
	std::cout << RED << "MoreVictim left..." << RESET << std::endl;
}

MoreVictim::MoreVictim(const MoreVictim &src) : Victim("null"){
	std::cout << YELLOW << "<MoreVictim> copy constructor is called." << RESET << std::endl;
	*this = src;
}

MoreVictim &MoreVictim::operator=(const MoreVictim &rhs) {
	std::cout << YELLOW << "<MoreVictim> assignation operator is called." << RESET << std::endl;
	if (this != &rhs) {
		this->_name = rhs.getName();
	}
	return *this;
}

void MoreVictim::polymorph(void) const {
	std::cout << MAGENTA << this->getName() << " has been turned into a white bunny!" << RESET << std::endl;
}
