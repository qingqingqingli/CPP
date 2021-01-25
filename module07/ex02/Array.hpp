/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 10:17:12 by qli           #+#    #+#                 */
/*   Updated: 2021/01/25 10:17:12 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */
# define WHITE			"\033[37m"				/* White */


class outOfLimits: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Index out of limits";
	}
};

// an example with INT array
class Array {

public:
	Array() : _n(0), _array(){
		std::cout << YELLOW << "** Array is created with [" << this->_n << "] element **" << RESET << std::endl;
	}

	// not sure if the initialization of array member is correct
	Array(unsigned int n) : _n(n), _array(new int[_n]()){
		for (unsigned int i = 0; i < this->_n; i++)
			this->_array[i] = 42;
		std::cout << YELLOW <<"** Array is created with [" << this->_n << "] element **" << RESET <<std::endl;
	}

	~Array() {
		if (this->_array)
			delete [] _array;
		std::cout << RED << "** Destructor is called **" << RESET << std::endl;
	}

	int & operator[](unsigned int i) const {
		try {
			if (i > this->size())
				throw (outOfLimits());
		}
		catch (std::exception & exception){
			std::cout << MAGENTA << exception.what() << RESET << std::endl;
		}
		return this->_array[i];
	}

	Array(Array const & src){
		std::cout << YELLOW << "** Copy constructor is called **" << RESET << std::endl;
		this->_n = 0;
		*this = src;
	}

	Array & operator=(Array const & rhs) {
		std::cout << YELLOW << "** Assignation operator is called **" << RESET << std::endl;
		if (this != &rhs)
		{
			if (this->_n > 0)
				delete [] this->_array;
			this->_n = rhs._n;
			int * array = new int[rhs.size()]();
			for (unsigned int i = 0; i < rhs.size(); i++)
				array[i] = rhs[i];
			this->_array = array;
		}
		return *this;
	}

	unsigned int size() const {
		return this->_n;
	}

private:
	unsigned int _n;
	int * _array;
};


