/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:47:15 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:47:15 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include <string>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

class AMateria {

private:
	unsigned int 	_xp;
	std::string 	_type;

public:
	AMateria(std::string const & type);
	AMateria();
	virtual ~AMateria();
	AMateria(AMateria const & src);
	AMateria & operator=(AMateria const & rhs);

	std::string const & getType() const;
	unsigned int 		getXP() const;
	void 				setXP(unsigned int);

	virtual AMateria* 	clone() const = 0;
	virtual void		use(ICharacter& target);
};
