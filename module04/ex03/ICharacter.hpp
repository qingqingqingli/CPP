/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:45:24 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:45:24 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICHARACTER_H
#define ICHARACTER_H

class ICharacter{

public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif //ICHARACTER_H
