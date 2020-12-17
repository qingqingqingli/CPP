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
public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(SuperMutant const & src);
	SuperMutant & operator=(SuperMutant const & rhs);

	void	takeDamage(int);
};


#endif //SUPERMUTANT_HPP
