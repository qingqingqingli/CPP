
#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H
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


#endif //MATERIASOURCE_H
