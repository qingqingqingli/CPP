/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 12:03:19 by qli           #+#    #+#                 */
/*   Updated: 2020/11/21 12:03:19 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {

private:
	Zombie*		_zombieArray;
	static int	_zombieNb;

public:
	explicit ZombieHorde(int N);
	~ZombieHorde();

	void	randomName();
	void	announce();
	void	releaseZombies();
};

#endif //ZOMBIEHORDE_HPP
