#include "Character.hpp"

Character::Character()
{
	std::cout << "Default Character Constructor called " << std::endl;
}

Character::Character(std::string name)
{
	this->name = name;
	std::cout << this->name << " Character Constructor called " << std::endl;
}

Character::Character(const Character &copy) : name(copy.name)
{
	
	for (int i = 0; i < 4; i++)
	{	
		if (copy.inv[i] != NULL)
			this->inv[i] = copy.inv[i]->clone();
		else
			this->inv[i] = NULL;
	}
	std::cout << "Copy Constructor called of Character" << std::endl;
	
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{	
		delete this->inv[i];
	}
	std::cout << "Character Destructor called" << std::endl;
}

Character & Character::operator=(const Character &assign)
{
	this->name = assign.name;
	std::cout << "Assignet operator of Character" << std::endl;
	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{	
		if (this->inv[i] == NULL)
		{
			this->inv[i] = m->clone();
			return ;
		}
	}
	std::cout << "Character equip "<< m->getType() << std::endl;
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "idx should be from 0 to 3 " << std::endl;
		return;
	}
	if (this->inv[idx])
		this->inv[idx] = NULL;
	std::cout << "Materia from slot " << idx << " unequiped" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "idx should be from 0 to 3 " << std::endl;
		return;
	}
	else
		this->inv[idx]->use(target);
	std::cout << "Materia from slot " << idx << " used to " << target.getName() << std::endl;
}