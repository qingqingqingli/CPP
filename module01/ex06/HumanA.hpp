/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 10:20:17 by qli           #+#    #+#                 */
/*   Updated: 2020/11/24 10:20:17 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

private:
	const Weapon& 	_weaponARef;
	std::string 	_name;
	std::string		_getName();

public:
	void			attack();
	HumanA(const std::string& name, const Weapon& weaponRef);
	~HumanA();
};

#endif //EX06_HUMANA_HPP
