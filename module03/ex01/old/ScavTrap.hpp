/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 20:34:03 by qli           #+#    #+#                 */
/*   Updated: 2020/11/28 20:34:03 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "FragTrap.hpp"


class ScavTrap : protected FragTrap {

public:
	ScavTrap(std::string const & name);
	~ScavTrap();
	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);

	using 	FragTrap::rangedAttack;
	using 	FragTrap::meleeAttack;
	using 	FragTrap::beRepaired;
	void	challengeNewcomer(void);
};

#endif //SCAVTRAP_HPP
