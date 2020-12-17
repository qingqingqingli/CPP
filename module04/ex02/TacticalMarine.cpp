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
#include "ISpaceMarine.hpp"

TacticalMarine::TacticalMarine(){
	std::cout << "<TacticalMarine> constructor" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "<TacticalMarine> destructor" << std::endl;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine & rhs) {
	std::cout << "<TacticalMarine> assignation operator" << std::endl;
	return *this;
}

TacticalMarine::TacticalMarine(TacticalMarine & src) {
	std::cout << "<TacticalMarine> copy constructor" << std::endl;
	*this = src;
}

TacticalMarine *TacticalMarine::clone() const {

}

void TacticalMarine::battleCry() const {

}

void TacticalMarine::rangedAttack() const {

}

void TacticalMarine::meleeAttack() const {

}
