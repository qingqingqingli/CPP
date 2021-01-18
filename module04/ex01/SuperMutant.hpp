/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:22:21 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:22:21 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Enemy.hpp"

class SuperMutant : public Enemy {

public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(SuperMutant const & src);
	SuperMutant & operator=(SuperMutant const & rhs);

	virtual void	takeDamage(int);
};
