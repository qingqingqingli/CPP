/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 16:24:51 by qli           #+#    #+#                 */
/*   Updated: 2020/12/04 16:24:51 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class ScavTrap {

private:
	int			_hitPoints;
	int			_maxHitPoints;
	int 		_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	std::string	_name;
	int 		_meleeAttackDamage;
	int 		_rangedAttackDamage;
	int			_armorDamageReduction;
	int			_pointToAttack;

public:
	void		rangedAttack(std::string const & target);
	void 		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(void);

	ScavTrap(std::string const & name);
	~ScavTrap();
	ScavTrap(ScavTrap const & src);
	ScavTrap & operator=(ScavTrap const & rhs);

	int			getHitPoints(void) const;
	int			getMaxHitPoints(void) const;
	int			getEnergyPoints(void) const;
	int			getMaxEnergyPoints(void) const;
	int			getLevel(void) const;
	std::string	getName(void) const;
	int			getMeleeAttackDamage(void) const;
	int			getRangedAttackDamage(void) const;
	int			getArmorDamageReduction(void) const;
	int			getPointsToAttack(void) const;
};


#endif //SCAVTRAP_H
