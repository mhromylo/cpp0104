#include "Ice.hpp"

// Constructors
Ice::Ice() : AMateria::AMateria("ice")
{
	this->type = "ice";
	std::cout << "Default Constructor called of " << this->type <<  std::endl;
}

Ice::Ice(std::string const & type)
{
	this->type = type;
	std::cout << "Type Constructor called of Ice" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy.type)
{
	std::cout << "Copy Constructor called of Ice" << std::endl;
}
// Destructor
Ice::~Ice()
{
	std::cout << "Destructor called of Ice" << std::endl;
}
// Operators
Ice & Ice::operator=(const Ice &assign)
{
	this->type = assign.type;
	std::cout << "Assignet operator of Ice" << std::endl;
	return *this;
}

std::string const & Ice::getType() const
{
	return this->type;
}

Ice* Ice::clone() const
{
	Ice *dolly = new Ice;
	return dolly;
}

void Ice::use(ICharacter& target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}