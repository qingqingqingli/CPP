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

#pragma once
#include "Enemy.hpp"

class MoreEnemy : public Enemy {

public:
	MoreEnemy();
	virtual ~MoreEnemy();
	MoreEnemy(MoreEnemy const & src);
	MoreEnemy & operator=(MoreEnemy const & rhs);

	virtual void	takeDamage(int);
};
