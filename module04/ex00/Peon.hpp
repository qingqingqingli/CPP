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

#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"

class Peon : public Victim {

public:
	Peon(std::string const & name);
	~Peon();
	Peon(Peon const & src);
	Peon & operator=(Peon const & rhs);

	void			polymorph(void) const;
};


#endif //PEON_HPP
