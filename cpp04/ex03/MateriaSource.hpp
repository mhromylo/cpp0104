#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"


class MateriaSource : public IMateriaSource
{
protected:
	AMateria *know[4];
public:
MateriaSource();
MateriaSource(const MateriaSource &copy);
~MateriaSource();
MateriaSource & operator=(const MateriaSource &assign);
void learnMateria(AMateria *materia);
AMateria* createMateria(std::string const & type);
};

#endif