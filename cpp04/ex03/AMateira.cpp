# include "AMateria.hpp"


AMateria::AMateria()
{
	std::cout << "AMateria has been created" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "AMateria " << this->type <<" been created" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
		std::cout << "AMateria copy " << copy.getType() <<" been created" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const & AMateria::getType() const //Returns the materia type
{
	return this->type;
}

AMateria & AMateria::operator=(const AMateria &assign)
{
	std::cout << "Copy assignment operator AMateria called" << std::endl;
	this->type = assign.getType();
	return *this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria " << this->type <<" been used to " << target.getName() << std::endl;
}