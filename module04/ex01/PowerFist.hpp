/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:22:57 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:22:57 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon{

private:
	std::string _name;
	int			_apcost;
	int			_damage;

public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist & operator=(PowerFist const & rhs);
	PowerFist(PowerFist const & src);

	virtual void attack() const;
};


#endif //POWERFIST_HPP
