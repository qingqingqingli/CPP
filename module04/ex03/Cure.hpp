/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:46:14 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:46:14 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {

private:
	unsigned int 	_xp;
	std::string 	_type;

public:

	Cure();
	virtual ~Cure();
	Cure(Cure const & src);
	Cure & operator=(Cure const & rhs);

	virtual Cure* 	clone() const;
	virtual void 	use(ICharacter& target);
};
