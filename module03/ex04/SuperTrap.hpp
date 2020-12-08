/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 19:15:42 by qli           #+#    #+#                 */
/*   Updated: 2020/12/04 19:15:42 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
#define SUPERTRAP_H
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap {

public:
	SuperTrap(std::string const & name);
	~SuperTrap();
	SuperTrap(SuperTrap const & src);
	SuperTrap & operator=(SuperTrap const & rhs);

	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;
};

#endif //SUPERTRAP_H
