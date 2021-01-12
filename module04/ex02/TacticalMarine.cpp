/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:35:45 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:35:45 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(){
	std::cout << GREEN << "Tactical Marine ready for battle!" << RESET << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << RED << "Aaargh..." << RESET << std::endl;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs) {
	if (this != &rhs)
		return *this;
	return *this;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src) {
	*this = src;
}

TacticalMarine *TacticalMarine::clone() const {
	return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const {
	std::cout << CYAN << "<TacticalMarine> For the holy PLOT!" << RESET << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout << CYAN << "<TacticalMarine> * attacks with a bolter *" << RESET << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << CYAN << "<TacticalMarine> * attacks with a chainsword *" << RESET << std::endl;
}
