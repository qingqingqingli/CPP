/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 13:50:35 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 13:50:35 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Victim.hpp"

class Peon : public Victim {

public:
	Peon();
	Peon(std::string const & name);
	virtual ~Peon();
	Peon(Peon const & src);
	Peon & operator=(Peon const & rhs);

	void polymorph(void) const;
};

