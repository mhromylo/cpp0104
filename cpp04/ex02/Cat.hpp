#ifndef Cat_HPP
# define Cat_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain* catsBrain;
public:
	Cat();
	~Cat();
	void makeSound() const;
	Cat &operator=(const Cat &src);
	Cat(const Cat &copy);
	Brain *getBrain() const;
};

#endif