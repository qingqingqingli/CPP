/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:35:31 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:35:31 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"


class TacticalMarine : public ISpaceMarine {
private:

public:
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine & operator=(TacticalMarine & rhs);
	TacticalMarine(TacticalMarine & src);

	TacticalMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

};


#endif //TACTICALMARINE_HPP
