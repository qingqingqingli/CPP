/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:21:35 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:21:35 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class Character {
private:
	std::string _name;
	int 		_ap;
	AWeapon*	_AWeaponPtr;

public:
	Character();
	Character(std::string const & name);
	virtual ~Character();
	Character & operator=(Character const & rhs);
	Character(Character const & src);

	void		recoverAP();
	void 		equip(AWeapon*);
	void		attack(Enemy* &);
	std::string getName() const;
	int 		getAP() const;
	AWeapon*	getAWeapon() const;
};

std::ostream &operator<<(std::ostream & o, Character const & character);

#endif //CHARACTER_HPP
