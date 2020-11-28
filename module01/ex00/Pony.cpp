/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 16:48:48 by qli           #+#    #+#                 */
/*   Updated: 2020/11/19 16:48:48 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(const std::string &name, const std::string &location) : _weight(0), _name(name){

	std::cout << GREEN << "A Pony named [" << this->getName() << "] is born on the " << location << "." << RESET << std::endl;\
}

Pony::~Pony(){

	std::cout << RED << "Pony [" << this->getName() << "] got sick and died." << RESET << std::endl;
}

float Pony::getWeight() const{

	return this->_weight;
}

std::string Pony::getName() const{

	return this->_name;
}

void Pony::setWeight(float userInput){

	if (userInput >= lowestWeight && userInput <= highestWeight)
		this->_weight = userInput;
	else
		std::cout << RED << "Please enter a weight between " << lowestWeight << "kg and " << highestWeight << "kg." << RESET << std::endl;
}

void Pony::ponyOnTheStack(float weight, const std::string &name){

	Pony	stackPony(name, "stack");

	stackPony.setWeight(weight);
	std::cout << "The weight of pony [" << stackPony.getName() << "] is [" << stackPony.getWeight() << "] kg." << std::endl;
}

void Pony::ponyOnTheHeap(float weight, const std::string &name){

	Pony*	heapPony = new Pony(name, "on the heap");

	heapPony->setWeight(weight);
	std::cout << "The weight of pony [" << heapPony->getName() << "] is [" << heapPony->getWeight() << "] kg." << std::endl;

	delete heapPony;
}



