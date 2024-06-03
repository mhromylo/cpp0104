#include "Cat.hpp"

Cat::Cat() : catsBrain(new Brain())
{
	type = "Cat";
	std::cout << "Cat created" <<std::endl;
}

Cat::~Cat()
{
	delete this->catsBrain;
	std::cout << "Cat destructor called" <<std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Copy assignment operator Cat called" << std::endl;
	this->type = src.type;
	if (this->catsBrain)
		*this->catsBrain = *src.catsBrain;
	else
		this->catsBrain = new Brain(*src.catsBrain);
	return *this;
}

Cat::Cat(const Cat &copy) :Animal(copy), catsBrain(new Brain(*copy.catsBrain))
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = copy;
}

Brain *Cat::getBrain() const
{
	return this->catsBrain;
}

void Cat::makeSound() const
{
	std::cout << "Cat meowing" <<std::endl;
}
