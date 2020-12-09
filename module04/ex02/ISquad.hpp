/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:34:44 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:34:44 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef ISQUAD_HPP
#define ISQUAD_HPP

class ISquad{
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

#endif //ISQUAD_HPP
