/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MoreVictim.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 09:30:03 by qli           #+#    #+#                 */
/*   Updated: 2021/01/15 09:30:03 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Specifies that the compiler includes the header file only once, when compiling a source code file
#pragma once
#include "Victim.hpp"

class MoreVictim : public Victim {

public:
	MoreVictim(std::string const & name="MoreVictim");
	virtual ~MoreVictim();
	MoreVictim(MoreVictim const & src);
	MoreVictim & operator=(MoreVictim const & rhs);

	void			polymorph(void) const;
};
