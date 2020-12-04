/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 20:31:49 by qli           #+#    #+#                 */
/*   Updated: 2020/11/28 20:31:49 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <string>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class FragTrap {
protected:
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
	void		vaulthunter_dot_exe(std::string const & target);

	FragTrap(std::string const & name);
	~FragTrap();
	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);
};

#endif //FRAGTRAP_HPP
