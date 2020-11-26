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

const Brain* Human::identify() const {

	return this->getBrain().identify();
}

const Brain& Human::getBrain() const {

	return this->_brainRef;
}

Human::Human() : _brainRef(_brain){
	std::cout << GREEN << "[Human] constructor is called." << RESET << std::endl;
}

Human::~Human() {
	std::cout << RED << "[Human] destructor is called." << RESET << std::endl;
}
