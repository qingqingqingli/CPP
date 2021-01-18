/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 10:17:45 by qli           #+#    #+#                 */
/*   Updated: 2021/01/14 10:17:45 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class AMateria;

class ICharacter {

public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

