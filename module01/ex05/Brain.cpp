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

Brain* Brain::identify() {

	return this;
}

//std::string Brain::identify() {
//
//	std::stringstream converter;
//	converter << std::hex << this;
//	std::string	brainAddressStr = converter.str();
//	return brainAddressStr;
//}

Brain::Brain() : _size("big"){
	std::cout << GREEN << "A " << this->getSize() << " [brain] is constructed." << RESET << std::endl;
}

Brain::~Brain() {
	std::cout << RED << "[Brain] destructor is called." << RESET << std::endl;
}

std::string Brain::getSize() const {
	return this->_size;
}
