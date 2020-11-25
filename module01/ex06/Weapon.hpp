/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/24 10:20:08 by qli           #+#    #+#                 */
/*   Updated: 2020/11/24 10:20:08 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP

#include <string>

class Weapon {

	std::string type;

	const std::string&	getType();
	void				setType();
};

#endif //EX06_WEAPON_HPP
