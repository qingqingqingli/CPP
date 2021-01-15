/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:46:35 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:46:35 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H
#include "AMateria.hpp"

class Ice : public AMateria {
private:
	unsigned int 	_xp;
	std::string 	_type;

public:

	Ice();
	virtual ~Ice();
	Ice(Ice const & src);
	Ice & operator=(Ice const & rhs);

	virtual AMateria* 	clone() const;
	virtual void 		use(ICharacter& target);
};


#endif //ICE_H
