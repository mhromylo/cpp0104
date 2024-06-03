#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "Character.hpp"

class Ice : public AMateria
{
	public:
		// Constructors
		Ice();
		Ice(const Ice &copy);
		Ice(std::string const & type);
		
		// Destructor
		virtual ~Ice();
		
		// Operators
		Ice & operator=(const Ice &assign);

		Ice* clone() const;
		std::string const & getType() const;
		void use(ICharacter& target);
		
	protected:
		std::string type;
};

#endif