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

std::string Brain::identify() {
	std::stringstream converter;
	converter << std::hex << this;
	std::string	brainAddressStr = converter.str();
	return brainAddressStr;
}

Brain::Brain() {
	std::cout << GREEN << "[Brain] constructor is called." << RESET << std::endl;
}

Brain::~Brain() {
	std::cout << RED << "[Brain] destructor is called." << RESET << std::endl;
}
