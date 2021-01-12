/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:36:00 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:36:00 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Squad.hpp"

Node* Squad::_head = NULL;

Squad::Squad() : _unitCount(0){
	return;
}

Squad::~Squad() {
	while(this->_head)
	{
		Node *headCopy = this->_head;
		this->_head = this->_head->next;
		delete(headCopy->unitPtr);
		delete(headCopy);
	}
	return;
}

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

Squad &Squad::operator=(Squad const &rhs) {
	std::cout << "Squad assignation called" << std::endl;
	if (this != &rhs){
		this->_unitCount = rhs.getCount();
		if (this->_head)
		{
			Node *newHead = deepCopySquad(rhs._head);
			deleteExistingNodes(this->_head);
			this->_head = newHead;
		}
	}
	return *this;
}

Squad::Squad(Squad const &src) {
	std::cout << "Squad copy constructor called" << std::endl;

	if (this != &src)
	{
		this->_unitCount = src._unitCount;
		if (src._head)
		{
			Node *newHead = deepCopySquad(src._head);
			this->_head = newHead;
		}
	}
}

int Squad::getCount() const {
	return this->_unitCount;
}

ISpaceMarine *Squad::getUnit(int N) const {

	if (N == 0)
		return (this->_head->unitPtr);
	else if (N > 0 && N < this->getCount())
	{
		int i = 0;
		Node *headOriginal = this->_head;
		while (i < N)
		{
			this->_head = this->_head->next;
			i++;
		}
		Node *returnNode = this->_head;
		this->_head = headOriginal;
		return (returnNode->unitPtr);
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

	if (!this->_head){
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
