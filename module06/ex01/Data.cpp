/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 14:52:41 by qli           #+#    #+#                 */
/*   Updated: 2021/01/21 14:52:41 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.h"

Data::Data(std::string string1, int i, std::string string2) : s1(string1), n(i), s2(string2){

}

Data::~Data() {

}

Data::Data(const Data &src) {
	*this = src;
}

Data &Data::operator=(const Data &rhs) {
	if (this != &rhs)
	{
		this->s1 = rhs.s1;
		this->s2 = rhs.s2;
	}
	return *this;
}

std::string Data::getS1() {
	return this->s1;
}

std::string Data::getS2() {
	return this->s2;
}

int Data::getN() {
	return this->n;
}
