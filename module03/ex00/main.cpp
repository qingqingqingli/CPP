/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 20:31:44 by qli           #+#    #+#                 */
/*   Updated: 2020/11/28 20:31:44 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main() {
	FragTrap fragTrap("human");
	FragTrap fragTrap1 = fragTrap;

	fragTrap1.rangedAttack("unicorn");
	fragTrap1.meleeAttack("dog");

	fragTrap1.vaulthunter_dot_exe("cat");
	fragTrap1.beRepaired(15);
	fragTrap1.beRepaired(15);
	return 0;
}
