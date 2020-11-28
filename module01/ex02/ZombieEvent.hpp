/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 20:52:41 by qli           #+#    #+#                 */
/*   Updated: 2020/11/19 20:52:41 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {

public:
	static void 	setZombieType(const std::string &newType);
	static Zombie*	newZombie(const std::string& name);

	ZombieEvent();
	~ZombieEvent();
};

#endif //ZOMBIEEVENT_HPP
