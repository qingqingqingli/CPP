/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:22:17 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:22:17 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){
	std::cout << GREEN << "* click click click *" << RESET << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << RED << "* SPROTCH *" << RESET << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &src) : Enemy(){
	std::cout << YELLOW << "<RadScorpion> Copy constructor is called." << RESET << std::endl;
	*this = src;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &rhs) {
	std::cout << YELLOW << "<RadScorpion> Assignation operator is called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}
