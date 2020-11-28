/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 10:20:04 by qli           #+#    #+#                 */
/*   Updated: 2020/11/24 10:20:04 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

const std::string& Weapon::getType() const {

	return this->_typeRef;
}

void Weapon::setType(const std::string& type) {

	this->_type = type;
}

Weapon::Weapon(const std::string& type) : _type(type), _typeRef(_type){

	std::cout << GREEN << "[Weapon] constructor is called and created weapon [" << this->getType() << "]." << RESET << std::endl;
}

Weapon::~Weapon() {

	std::cout << RED << "[Weapon] destructor is called and destroyed weapon [" << this->getType() << "]." << RESET << std::endl;
}
