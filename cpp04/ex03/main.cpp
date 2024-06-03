#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character *max = new Character("max");
	ICharacter *ork = new Character("ork");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	
	std::cout << "==================" << tmp->getType(); 
	max->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	max->equip(tmp);
	delete tmp;
	max->use(0, *ork);
	max->use(1, *ork);
	std::cout << "==================";
	Character *alex = new Character(*max);
	alex->use(0, *ork);
	alex->use(1, *ork);
	std::cout << alex->getName();
	delete alex;
	delete src;
	delete max;
	delete ork;
	return 0;
}
