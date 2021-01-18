/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MoreWeapon.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 10:52:05 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 10:52:05 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AWeapon.hpp"

class MoreWeapon : public AWeapon{

public:
	MoreWeapon();
	virtual ~MoreWeapon();
	MoreWeapon & operator=(MoreWeapon const & rhs);
	MoreWeapon(MoreWeapon const & src);

	virtual void attack() const;
};
