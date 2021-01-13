/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:35:28 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:35:28 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
	std::cout << GREEN << "* teleports from space *" << RESET << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << RED << "I'll be back..." << RESET << std::endl;
}

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator & rhs) {
	if (this != &rhs)
		return *this;
	return *this;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator & src) {
	*this = src;
}

AssaultTerminator *AssaultTerminator::clone() const {
	return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const {
	std::cout << CYAN << "This code is unclean. PURIFY IT!" << RESET << std::endl;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << CYAN << "* does nothing *" << RESET << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << CYAN << "* attacks with chainfists*" << RESET << std::endl;
}
