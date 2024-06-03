#ifndef Cat_HPP
# define Cat_HPP

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{
private:
	
public:
	Cat();
	~Cat();
	Cat &operator=(const Cat &src);
	Cat(const Cat &copy);
	void makeSound() const;
};

#endif