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

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	using FragTrap::_hitPoints;
	using FragTrap::_maxHitPoints;
	using NinjaTrap::_energyPoints;
	using NinjaTrap::_maxEnergyPoints;
	using NinjaTrap::_meleeAttackDamage;
	using FragTrap::_rangedAttackDamage;
	using FragTrap::_armorDamageReduction;
	using NinjaTrap::_pointToAttack;
	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;

private:
	std::string _name;
	int 		_level;

public:
	SuperTrap(std::string const & name);
	~SuperTrap();
	SuperTrap(SuperTrap const & src);
	SuperTrap & operator=(SuperTrap const & rhs);

	void	print_all_value(void);

};

#endif //SUPERTRAP_H
