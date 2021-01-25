/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 14:36:49 by qli           #+#    #+#                 */
/*   Updated: 2021/01/25 14:36:49 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define YELLOW			"\033[33m"				/* Yellow */
# define MAGENTA		"\033[35m"				/* Magenta */

class outOfLimits: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Index out of limits";
	}
};

template <typename T>
class Array{

public:
	Array<T>() : _n(0), _array(){
		std::cout << YELLOW << "** Array is created with [" << this->_n << "] element **" << RESET << std::endl;
	}

	explicit Array<T>(unsigned int n) : _n(n), _array(new T[_n]()){
		std::cout << YELLOW <<"** Array is created with [" << this->_n << "] element **" << RESET <<std::endl;
	}

	~Array<T>() {
		if (this->_array)
			delete [] _array;
		std::cout << RED << "** Destructor is called **" << RESET << std::endl;
	}

	T & operator[](unsigned int i) const {
		try {
			if (i > this->size())
				throw (outOfLimits());
		}
		catch (std::exception & exception){
			std::cout << MAGENTA << exception.what() << RESET << std::endl;
		}
		return this->_array[i];
	}

	Array<T>(Array<T> const & src) : _n(0){
		std::cout << YELLOW << "** Copy constructor is called **" << RESET << std::endl;
		*this = src;
	}

	Array<T> & operator=(Array<T> const & rhs) {
		std::cout << YELLOW << "** Assignation operator is called **" << RESET << std::endl;
		if (this != &rhs)
		{
			if (this->_n > 0)
				delete [] this->_array;
			this->_n = rhs._n;
			T * array = new T[rhs.size()]();
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
	T * _array;

};