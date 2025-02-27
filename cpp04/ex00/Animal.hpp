#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	std::string	getType() const;
	void setType(std::string type);
	virtual void makeSound() const;
	Animal &operator=(const Animal &src);
	Animal(const Animal &copy);

};

#endif