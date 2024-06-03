#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "DOG created" <<std::endl;
}

Dog::~Dog()
{
	std::cout << "DOG destructor called" <<std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Copy assignment operator Dog called" << std::endl;
	this->type = src.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog barking" <<std::endl;	
}

Dog::Dog(const Dog &copy) :Animal(copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = copy;
}
