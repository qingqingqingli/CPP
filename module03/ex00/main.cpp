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
	FragTrap fragTrap("test");
	FragTrap fragTrap1 = fragTrap;
	fragTrap1.rangedAttack("unicorn");
	return 0;
}
