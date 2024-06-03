#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain* dogsBrain;
public:
	Dog();
	Dog(const Dog &copy);
	~Dog();
	void makeSound() const;
	Dog &operator=(const Dog &src);
	Brain *getBrain() const;
};

#endif