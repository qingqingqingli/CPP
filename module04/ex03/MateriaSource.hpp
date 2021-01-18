/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: qli <qli@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 10:18:08 by qli           #+#    #+#                 */
/*   Updated: 2021/01/14 10:18:08 by qli           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
	AMateria *_materia[4];

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const & src);
	MateriaSource & operator=(MateriaSource const & rhs);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};
