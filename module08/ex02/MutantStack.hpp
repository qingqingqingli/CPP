/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/27 17:39:34 by qli           #+#    #+#                 */
/*   Updated: 2021/01/27 17:39:34 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <deque>
#include <list>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

template<typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container> {

public:
	MutantStack(): std::stack<T, Container>() {}
	~MutantStack() {}
	MutantStack<T, Container>(MutantStack<T, Container> const & src) {*this = src;}
	MutantStack<T, Container> & operator=(MutantStack<T, Container> const & rhs) {
		if (this != &rhs)
			this->c = rhs.c;
		return *this;
	}

	typedef typename Container::iterator iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;

	// c is the underlying container
	iterator begin() {return this->c.begin();}
	iterator end() {return this->c.end();}
	const_iterator begin() const {return this->c.begin();}
	const_iterator end() const {return this->c.end();}
	reverse_iterator rbegin() {return this->c.rbegin();}
	reverse_iterator rend() {return this->c.rend();}
	const_reverse_iterator rbegin() const {return this->c.rbegin();}
	const_reverse_iterator rend() const {return this->c.rend();}
};


