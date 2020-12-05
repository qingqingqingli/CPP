/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/04 16:59:09 by qli           #+#    #+#                 */
/*   Updated: 2020/12/04 16:59:09 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

public:
	FragTrap(std::string const & name);
	~FragTrap();
	FragTrap(FragTrap const & src);
	FragTrap & operator=(FragTrap const & rhs);

	void	vaulthunter_dot_exe(std::string const & target);
	void	print_all_value(void);
};


#endif //FRAGTRAP_HPP
