/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:47:15 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:47:15 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.hpp"
#include <string>

class AMateria{

private:
	unsigned int 	_xp;
	std::string 	_type;

public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(AMateria const & src);
	AMateria & operator=(AMateria const & rhs);

	std::string const & getType() const;
	unsigned int 		getXP() const;
	void 				setXP(unsigned int);

	virtual AMateria* 	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif //AMATERIA_H
