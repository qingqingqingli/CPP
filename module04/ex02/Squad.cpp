/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 11:15:56 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 11:15:56 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Squad.hpp"

// constructor
Squad::Squad() : _unitCount(0), _head(NULL){
	return;
}

// destructor
Squad::~Squad() {
	while(this->_head)
	{
		delete(this->_head->unitPtr);
		Node *headCopy = this->_head->next;
		delete this->_head;
		this->_head = headCopy;
	}
	return;
}

// copy function
Node* deepCopySquad(Node* head)
{
	Node *newHead = new Node;
	newHead->unitPtr = head->unitPtr->clone();
	newHead->next = NULL;
	Node *originalHead = newHead;

	head = head->next;
	while (head)
	{
		Node *newNode = new Node;
		newNode->unitPtr = head->unitPtr->clone();
		newNode->next = NULL;

		newHead->next = newNode;
		newHead = newHead->next;

		head = head->next;
	}
	return originalHead;
}

// delete function
void deleteExistingNodes(Node* head)
{
	while (head)
	{
		Node *headCopy = head;
		head = head->next;
		delete(headCopy->unitPtr);
		delete(headCopy);
	}
}

// copy constructor
Squad::Squad(Squad const &src) {
	std::cout << YELLOW << "Squad copy constructor called" << RESET << std::endl;
	this->_head = NULL;
	if (src.getCount())
		*this = src;
}

// assignation operator
Squad &Squad::operator=(Squad const &rhs) {
	std::cout << YELLOW << "Squad assignation called" << RESET << std::endl;
	if (this != &rhs)
	{
		this->_unitCount = rhs.getCount();
		if (rhs._head)
		{
			Node *newHead = deepCopySquad(rhs._head);
			deleteExistingNodes(this->_head);
			this->_head = newHead;
		}
	}
	return *this;
}

int Squad::getCount() const {
	return this->_unitCount;
}

ISpaceMarine *Squad::getUnit(int N) const {

	Node *copy = this->_head;
	if (N == 0) {
		return (copy->unitPtr);
	}
	else if (N > 0 && N < this->getCount())
	{
		int i = 0;
		while (i < N)
		{
			copy = copy->next;
			i++;
		}
		return (copy->unitPtr);
	}
	return NULL;
}

int checkDuplicate(ISpaceMarine *spaceMarine, Node *head)
{
	if (head)
	{
		while (head->next)
		{
			if (head->unitPtr == spaceMarine)
				return -1;
			head = head->next;
		}
		if (head->unitPtr == spaceMarine)
			return -1;
	}
	return 0;
}

int Squad::push(ISpaceMarine *spaceMarine) {
	if (!spaceMarine || checkDuplicate(spaceMarine, this->_head) == -1)
		return (-1);

	Node *newNode = new Node; //malloc
	newNode->unitPtr = spaceMarine;
	newNode->next = NULL;

	if (this->_head == NULL){
		this->_head = newNode;
	}
	else
	{
		Node *headCopy = this->_head;

		while(this->_head->next && this->_head->unitPtr != spaceMarine)
		{
			this->_head = this->_head->next;
		}
		this->_head->next = newNode;
		this->_head = headCopy;
	}

	this->setCount(this->getCount() + 1);
	return this->getCount();
}

void Squad::setCount(int i) {
	this->_unitCount = i;
}