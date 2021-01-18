/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:22:00 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:22:00 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Enemy.hpp"

class RadScorpion : public Enemy {

public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(RadScorpion const & src);
	RadScorpion & operator=(RadScorpion const & rhs);
};
