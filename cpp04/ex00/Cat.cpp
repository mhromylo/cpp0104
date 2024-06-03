#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat created" <<std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" <<std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Copy assignment operator Cat called" << std::endl;
	this->type = src.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat meowing" <<std::endl;	
}

Cat::Cat(const Cat &copy) :Animal(copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = copy;
}
