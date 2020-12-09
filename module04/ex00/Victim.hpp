/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 13:49:55 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 13:49:55 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <string>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class Victim {

private:
	std::string 	_name;

public:
	Victim(std::string const & name);
	~Victim();
	Victim(Victim const & src);
	Victim & operator=(Victim const & rhs);

	std::string 	getName() const;
	void			announce() const;
	void			getPolymorphed(void) const;
};

#endif //VICTIM_HPP
