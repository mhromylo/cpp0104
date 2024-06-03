#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "Character.hpp"

class Cure : public AMateria
{
	public:
		// Constructors
		Cure();
		Cure(const Cure &copy);
		Cure(std::string const & type);
		
		// Destructor
		virtual ~Cure();
		
		// Operators
		Cure & operator=(const Cure &assign);

		Cure* clone() const;
		std::string const & getType() const;
		void use(ICharacter& target);
		
	private:
		std::string type;
};

#endif