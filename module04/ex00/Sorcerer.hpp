/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 13:49:16 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 13:49:16 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <string>
#include "Victim.hpp"
#include "Peon.hpp"

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class Sorcerer {

private:
	std::string		_name;
	std::string 	_title;

public:
	Sorcerer(std::string const & name, std::string const & title);
	~Sorcerer();
	Sorcerer(Sorcerer const & src);
	Sorcerer & operator=(Sorcerer const & rhs);

	std::string 	getName() const;
	std::string 	getTitle() const;
	void			announce() const;
	void			polymorph(Victim const &) const;
	void			polymorph(Peon const &) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & sorcerer);

#endif //SORCERER_HPP
