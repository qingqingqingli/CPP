/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MoreEnemy.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 10:50:42 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 10:50:42 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_MOREENEMY_HPP
#define EX01_MOREENEMY_HPP
#include "Enemy.hpp"

class MoreEnemy : public Enemy {

private:
	int			_hp;
	std::string	_type;

public:
	MoreEnemy();
	virtual ~MoreEnemy();
	MoreEnemy(MoreEnemy const & src);
	MoreEnemy & operator=(MoreEnemy const & rhs);

	virtual void	takeDamage(int);
};



#endif //EX01_MOREENEMY_HPP
