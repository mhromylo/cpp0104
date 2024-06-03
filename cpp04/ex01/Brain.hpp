#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <string>

class Brain {
private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain &copy);
	virtual ~Brain();
	Brain& operator=(const Brain &src);
	void setIdeas(std::string idea);
	virtual void showIdeas();
};

#endif