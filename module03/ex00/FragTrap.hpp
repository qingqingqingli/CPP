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
# define BLACK			"\033[30m"				/* Black */
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */
# define WHITE			"\033[37m"				/* White */
# define BOLDBLACK		"\033[1m\033[30m"		/* Bold Black */
# define BOLDRED		"\033[1m\033[31m"		/* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"		/* Bold Green */
# define BOLDYELLOW		"\033[1m\033[33m"		/* Bold Yellow */
# define BOLDBLUE		"\033[1m\033[34m"		/* Bold Blue */
# define BOLDMAGENTA	"\033[1m\033[35m"		/* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"		/* Bold Cyan */
# define BOLDWHITE		"\033[1m\033[37m"		/* Bold White */

class FragTrap {
private:
	int			_hitPoints; //  determines the max amount of damage a character can take
	int			_maxHitPoints; // hit points cannot exceed maxhitPoints
	int 		_energyPoints; // can not exceed the max
	int 		_maxEnergyPoints;
	int			_level;
	std::string	_name; // parameter of constructor
	int 		_meleeAttackDamage;
	int 		_rangedAttackDamage;
	int			_armorDamageReduction;

public:
	void		rangedAttack(std::string const & target);
	void 		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount); // need to take armor damage into account
	void		beRepaired(unsigned int amount);

	// cost 25 energy points to run
	void		vaulthunter_dot_exe(std::string const & target); // effect a semi-random attack on the target

	// canonical form
	FragTrap(std::string const & name);
	~FragTrap();
	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);

};


#endif //FRAGTRAP_HPP
