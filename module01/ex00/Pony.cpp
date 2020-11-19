/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/18 16:12:20 by qli           #+#    #+#                 */
/*   Updated: 2020/11/18 16:12:21 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Pony.hpp"

Pony::Pony(int height, int weight, const std::string &name, const std::string &skinColor)
: _height(height), _weight(weight), _name(name), _skinColor(skinColor) {
	return;
}

Pony::~Pony() {
	std::cout << "Pony " << this->_name << " is died." << std::endl;
	return;
}

void Pony::ponyOnTheHeap(int height, int weight, const std::string &name, const std::string &skinColor) {
	Pony*	heapPony = new Pony(height, weight, name, skinColor);

	std::cout << "Pony " << this->_name << " is born on the HEAP." << std::endl;
	std::cout << this->_name << " is " << height << "m tall." << std::endl;
	std::cout << this->_name << " is weighed " << weight << "kg." << std::endl;
	std::cout << "The skin color of " << this->_name << " is " << skinColor << "." << std::endl;

	delete heapPony;
	std::cout << "Pony on the heap got sick and died. " << std::endl;
	return;
}

void Pony::ponyOnTheStack(int height, int weight, const std::string &name, const std::string &skinColor) {
	Pony	stackPony = Pony(height, weight, name, skinColor);

	std::cout << this->_name << " is " << height << "m tall." << std::endl;
	std::cout << this->_name << " is weighed " << weight << "kg." << std::endl;
	std::cout << "The skin color of " << this->_name << " is " << skinColor << "." << std::endl;

	return;
}

std::string Pony::getSkinColor() {
	return std::string(this->_skinColor);
}

std::string Pony::getName() {
	return std::string(this->_name);
}

int Pony::getWeight() {
	return this->_weight;
}

int Pony::getHeight() {
	return this->_height;
}


