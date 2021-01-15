/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:22:00 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:22:00 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy {
private:
	int			_hp;
	std::string	_type;

public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(RadScorpion const & src);
	RadScorpion & operator=(RadScorpion const & rhs);
};


#endif //RADSCORPION_HPP
