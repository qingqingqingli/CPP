/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 13:17:24 by qli           #+#    #+#                 */
/*   Updated: 2020/11/21 13:17:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Brain.hpp"

const Brain* Brain::identify() const {

	return this;
}

Brain::Brain() : _size("big"){
	std::cout << GREEN << "A " << this->getSize() << " [brain] is constructed." << RESET << std::endl;
}

Brain::~Brain() {
	std::cout << RED << "[Brain] destructor is called." << RESET << std::endl;
}

std::string Brain::getSize() const {
	return this->_size;
}
