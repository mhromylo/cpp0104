#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Copy constructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = src.ideas[i];
	}
	std::cout << "Copy constructor called." << std::endl;
	return (*this);
}

void Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = idea;
	}
	
}

void Brain::showIdeas()
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << ideas[i];
		if (i == 49)
			std::cout << std::endl;
	}
	std::cout << std::endl;
	
}