/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:22:39 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:22:39 by qli           ########   odam.nl         */
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

class Enemy {

protected:
	int			_hp;
	std::string	_type;

public:
	Enemy(int hp=0, std::string const & type="enemy");
	virtual ~Enemy();
	Enemy & operator=(Enemy const & rhs);
	Enemy(Enemy const & src);

	std::string getType() const;
	int getHP() const;

	virtual void takeDamage(int);

};

