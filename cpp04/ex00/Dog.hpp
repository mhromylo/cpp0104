#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal
{
private:
	
public:
	Dog();
	~Dog();
	Dog &operator=(const Dog &src);
	Dog(const Dog &copy);
	void makeSound() const;
};

#endif