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

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */

class Weapon {

private:
	std::string 		_type;
	std::string&		_typeRef;

public:
	const std::string&	getType() const;
	void				setType(const std::string& type);

	Weapon(const std::string& type);
	~Weapon();


};

#endif //EX06_WEAPON_HPP
