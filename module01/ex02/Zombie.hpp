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
#include <string>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define BOLDYELLOW		"\033[1m\033[33m"		/* Bold Yellow */

class Zombie {
private:
	std::string 		_name;
	static std::string	_type;

public:
	void				setName(const std::string &name);
	std::string			getName();

	static void 		setType(const std::string &type);
	static std::string 	getType();

	void				announce();
	static void			randomChump();

	Zombie();
	~Zombie();

};


#endif //ZOMBIE_H
