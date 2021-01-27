//
// Created by qli on 25/01/2021.
//

#pragma once
#include <stack>

template <typename T>
class MutantStack{

public:
	MutantStack<T>() : _stack(new std::stack<T>){
	}

	~MutantStack<T>() {
		if (this->_stack)
			delete this->_stack;
	}

	MutantStack<T>(MutantStack<T> const & src) {
		*this = src;
	}

	// need to rewrite
	MutantStack<T> & operator=(MutantStack<T> const & rhs) {
		if (this != &rhs)
		{
			this->_size = rhs._size;
			this->_stack = rhs._stack;
		}
		return *this;
	}

	void pop() {
		this->_stack->pop();
	}

	void push(T t) {
		this->_stack->push(t);
	}

	unsigned int size() const {
		return this->_stack->size();
	}

	T	top() {
		return this->_stack->top();
	}

	class iterator {

	};

	MutantStack<T>::iterator begin() {

	}

	MutantStack<T>::iterator end() {

	}

private:
	std::stack<T> 	*_stack;

};
