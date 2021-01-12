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


#ifndef CURE_H
#define CURE_H
#include "AMateria.hpp"

class Cure : public AMateria {

private:
	unsigned int 	_xp;
	std::string 	_type;

public:

	Cure();
	~Cure();
	Cure(Cure const & src);
	Cure & operator=(Cure const & rhs);

	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //CURE_H
