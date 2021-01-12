/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:45:57 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:45:57 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_H
#define CHARACTER_H
#include "ICharacter.hpp"

class Character : public ICharacter {

private:
	std::string 	_name;
	AMateria *_materia[4];

public:
	Character(std::string & name);
	Character(Character const & src);
	Character & operator=(Character const & rhs);
	~Character();

	std::string const & getName() const;
	void 				equip(AMateria* m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter& target);
	AMateria*			getMateria(int i);

};


#endif //CHARACTER_H
