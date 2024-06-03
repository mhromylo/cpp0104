#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->know[i] = NULL;
	}
	
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource copy constructor Called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->know[i] = copy.know[i];
	}
	
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->know[i];
	}
	
	std::cout << "MateriaSource defstructor Called" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->know[i] != NULL)
		{
			delete this->know[i]->clone();
			this->know[i] = assign.know[i];
		}	
	}
	std::cout << "Assignet operator of MateriaSource" << std::endl;
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	std::cout << "learnMateria function been Called for " << materia->getType() << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if(this->know[i] == NULL)
		{
			this->know[i] = materia;
			std::cout << "New Materia " << this->know[i]->getType() << " been Lerned" << std::endl;
			return;
		}
	}
	delete materia;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	std::cout << "createMateria function been Called" << std::endl;
	if (type != "ice" && type != "cure")
	{
		std::cout << "Now we can learn only ice or cure" << std::endl;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->know[i] != NULL && this->know[i]->getType() == type)
		{
			return (this->know[i]->clone());
		}	
	}
	return (0);
}