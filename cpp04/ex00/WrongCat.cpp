#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat created" <<std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" <<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "Copy assignment operator WrongCat called" << std::endl;
	this->type = src.type;
	return *this;
}

WrongCat::WrongCat(const WrongCat &copy) :WrongAnimal(copy)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = copy;
}

void WrongCat::makeSound() const
{
	std::cout  << this->getType() << " Wrong Meow!" << std::endl;
}
