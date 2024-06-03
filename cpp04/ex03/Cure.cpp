#include "Cure.hpp"

// Constructors
Cure::Cure() :AMateria::AMateria("cure")
{
	this->type = "cure";
	std::cout << "Default Constructor called of Cure" << std::endl;
}

Cure::Cure(std::string const & type)
{
	this->type = type;
	std::cout << "Type Constructor called of Cure" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy.type)
{
	std::cout << "Copy Constructor called of Cure" << std::endl;
}
// Destructor
Cure::~Cure()
{
	std::cout << "Destructor called of Cure" << std::endl;
}
// Operators
Cure & Cure::operator=(const Cure &assign)
{
	this->type = assign.type;
	std::cout << "Assignet operator of Cure" << std::endl;
	return *this;
}

std::string const & Cure::getType() const
{
	return this->type;
}

Cure* Cure::clone() const
{
	Cure *dolly = new Cure;
	return dolly;
}

void Cure::use(ICharacter& target)
{
	std::cout <<  "* heals " << target.getName() << "’s wounds *" << std::endl;
}