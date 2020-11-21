/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 13:17:43 by qli           #+#    #+#                 */
/*   Updated: 2020/11/21 13:17:43 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

std::string Human::identify() {

	return this->getBrain().identify();
}

Brain Human::getBrain() {
	return this->_brain;
}

Human::Human() {
	std::cout << GREEN << "[Human] constructor is called." << RESET << std::endl;
}

Human::~Human() {
	std::cout << RED << "[Human] destructor is called." << RESET << std::endl;
}
