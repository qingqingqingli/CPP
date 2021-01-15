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


#ifndef EX01_MOREWEAPON_HPP
#define EX01_MOREWEAPON_HPP
#include "AWeapon.hpp"

class MoreWeapon : public AWeapon{

private:
	std::string _name;
	int			_apcost;
	int			_damage;

public:
	MoreWeapon();
	virtual ~MoreWeapon();
	MoreWeapon & operator=(MoreWeapon const & rhs);
	MoreWeapon(MoreWeapon const & src);

	virtual void attack() const;
};

#endif //EX01_MOREWEAPON_HPP
