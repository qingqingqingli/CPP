/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:22:21 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:22:21 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy {

private:
	int			_hp;
	std::string	_type;

public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(SuperMutant const & src);
	SuperMutant & operator=(SuperMutant const & rhs);

	virtual void	takeDamage(int);
};


#endif //SUPERMUTANT_HPP
