#include "Dog.hpp"

Dog::Dog() : dogsBrain(new Brain())
{
	type = "Dog";
	std::cout << "DOG created" <<std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy), dogsBrain(new Brain(*copy.dogsBrain))
{
	type = "Dog";
	std::cout << "DOG created" <<std::endl;
}

Dog::~Dog()
{
	delete this->dogsBrain;
	std::cout << "DOG destructor called" <<std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Copy assignment operator Dog called" << std::endl;
	this->type = src.type;
	if (this->dogsBrain) {
				*this->dogsBrain = *src.dogsBrain;
			} else {
				this->dogsBrain = new Brain(*src.dogsBrain);
			}
	return *this;
}

Brain *Dog::getBrain() const
{
	return this->dogsBrain;
}

void Dog::makeSound() const
{
	std::cout << "Dog barking" <<std::endl;
}