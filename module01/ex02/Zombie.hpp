/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 20:51:10 by qli           #+#    #+#                 */
/*   Updated: 2020/11/19 20:51:10 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

// keep in mind: Zombies must be destroyed at appropriate times.
// they also need to be allocated appropriately. Decide on stack or heap with reasoning

#include <string>

class Zombie {
public:



private:
	std::string 	name;
	std::string		type;
	void			announce(); // output the name and type of the Zombie
	void			randomChump(); // create a Zombie with a random name and makes it announce itself

};


#endif //ZOMBIE_H
