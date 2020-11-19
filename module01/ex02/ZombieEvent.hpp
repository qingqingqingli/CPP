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

	void 	setZombieType(); // store a type in the object
	Zombie*	newZombie(std::string name); // create a Zombie with the chosen type, name it and return it

};


#endif //ZOMBIEEVENT_HPP
