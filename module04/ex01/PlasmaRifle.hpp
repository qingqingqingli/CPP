/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:26:46 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:26:46 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

private:
	std::string _name;
	int			_apcost;
	int			_damage;

public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle & operator=(PlasmaRifle const & rhs);
	PlasmaRifle(PlasmaRifle const & src);

	virtual void attack() const;
};

#endif //PLASMARIFLE_HPP
