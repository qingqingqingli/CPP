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

public:
	const Brain _brain;
	std::string	identify();
	Brain		getBrain();

	Human();
	~Human();
};

#endif //HUMAN_HPP
