/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 13:17:36 by qli           #+#    #+#                 */
/*   Updated: 2020/11/21 13:17:36 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define BOLDYELLOW		"\033[1m\033[33m"		/* Bold Yellow */

class Brain {

public:
	std::string	identify(); // returns the brain's address in memory

	Brain();
	~Brain();
};

#endif //BRAIN_HPP
