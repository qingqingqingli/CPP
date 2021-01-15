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

#ifndef EX00_MOREVICTIM_HPP
#define EX00_MOREVICTIM_HPP

#include "Victim.hpp"

class MoreVictim : public Victim {

public:
	MoreVictim();
	MoreVictim(std::string const & name);
	virtual ~MoreVictim();
	MoreVictim(MoreVictim const & src);
	MoreVictim & operator=(MoreVictim const & rhs);

	void			polymorph(void) const;
};

#endif //EX00_MOREVICTIM_HPP
