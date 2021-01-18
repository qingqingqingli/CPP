/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:22:57 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:22:57 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AWeapon.hpp"

class PowerFist : public AWeapon{

public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist & operator=(PowerFist const & rhs);
	PowerFist(PowerFist const & src);

	virtual void attack() const;
};
