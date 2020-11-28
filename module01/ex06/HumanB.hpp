/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 10:20:24 by qli           #+#    #+#                 */
/*   Updated: 2020/11/24 10:20:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
	Weapon*            	_weaponBPtr;
	const std::string	_name;
	std::string			_getName();

public:
	void 				attack();
	void				setWeapon(Weapon& weaponName);
	HumanB(const std::string& name);
	~HumanB();
};

#endif //HUMANB_HPP
