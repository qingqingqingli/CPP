/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 13:17:50 by qli           #+#    #+#                 */
/*   Updated: 2020/11/21 13:17:50 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"

class Human {

private:
	const Brain 	_brain;
	const Brain& 	_brainRef;

public:
	const Brain*	identify() const;
	const Brain&	getBrain() const;

	Human();
	~Human();
};

#endif //HUMAN_HPP
