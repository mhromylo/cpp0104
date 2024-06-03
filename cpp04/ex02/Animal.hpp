#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	std::string	getType() const;
	void setType(std::string type);
	virtual void makeSound() const = 0;
	Animal &operator=(const Animal &src);
	Animal(const Animal &copy);


};

#endif