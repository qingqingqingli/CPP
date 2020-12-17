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
public:
	PowerFist();
	~PowerFist();
	PowerFist & operator=(PowerFist const & rhs);
	PowerFist(PowerFist const & src);

	void attack() const;
};


#endif //POWERFIST_HPP
