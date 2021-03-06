/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/09 16:45:13 by qli           #+#    #+#                 */
/*   Updated: 2020/12/09 16:45:13 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class IMateriaSource{

public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

};
