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
	std::string		getName();
	std::string 	getType();
	void 			setType(const std::string &type);
	void			announce();
	static void		randomChump(); // create a Zombie with a random name and makes it announce itself
	Zombie(const std::string &name, const std::string &type);
	~Zombie();

private:
	std::string 	_name;
	std::string		_type; // young, old, very old

};


#endif //ZOMBIE_H
