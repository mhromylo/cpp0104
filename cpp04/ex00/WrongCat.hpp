#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
	
public:
	WrongCat();
	~WrongCat();
	void makeSound() const;
	WrongCat &operator=(const WrongCat &src);
	WrongCat(const WrongCat &copy);
};

#endif