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

#pragma once
#include "ICharacter.hpp"

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class Character : public ICharacter {

private:
	std::string 	_name;
	AMateria 		**_materia;

public:
	Character();
	Character(const char *name);
	~Character();
	Character(Character const & src);
	Character & operator=(Character const & rhs);

	std::string const & getName() const;
	void 				equip(AMateria* m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter& target);
	AMateria*			getMateria(int i);

};
