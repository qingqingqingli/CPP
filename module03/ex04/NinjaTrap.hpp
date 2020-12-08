/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 17:16:38 by qli           #+#    #+#                 */
/*   Updated: 2020/12/04 17:16:38 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class NinjaTrap : public ClapTrap {

public:
	NinjaTrap(std::string const & name);
	~NinjaTrap();
	NinjaTrap(NinjaTrap const & src);
	NinjaTrap & operator=(NinjaTrap const & rhs);

	void		ninjaShoeBox(ClapTrap & clapTrap);
	void		ninjaShoeBox(FragTrap & fragTrap);
	void		ninjaShoeBox(ScavTrap & scavTrap);
	void		ninjaShoeBox(NinjaTrap & ninjaTrap);
};

#endif //NINJATRAP_HPP
