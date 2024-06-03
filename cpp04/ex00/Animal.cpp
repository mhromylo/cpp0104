#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const { return type; }

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" <<std::endl;	
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Copy assignment operator Animal called" << std::endl;
	this->type = src.type;
	return *this;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = copy;
}