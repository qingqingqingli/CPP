/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:35:48 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:35:48 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#ifndef SQUAD_HPP
#define SQUAD_HPP

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

struct Node {
	ISpaceMarine 	*unitPtr;
	struct Node 	*next;
};

class Squad : public ISquad {

private:
	int				_unitCount;
	Node 			*_head;

public:
	Squad();
	~Squad();
	Squad & operator=(Squad const & rhs);
	Squad(Squad const & src);

	int				getCount() const;
	void			setCount(int);
	ISpaceMarine* 	getUnit(int) const;
	int 			push(ISpaceMarine*);

};


#endif //SQUAD_HPP
