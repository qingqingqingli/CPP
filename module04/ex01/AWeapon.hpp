/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/16 19:13:51 by qli           #+#    #+#                 */
/*   Updated: 2020/12/16 19:13:51 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP
#include <iostream>
#include "AWeapon.hpp"

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class AWeapon {

private:
	std::string _name;
	int			_apcost;
	int			_damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	~AWeapon();
	AWeapon & operator=(AWeapon const & rhs);
	AWeapon(AWeapon const & src);

	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	void attack() const = 0;
};


#endif //EX01_AWEAPON_HPP
