#ifndef CHARACTER_HPP
# define CHARACTER_HPP


# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"

class Character : public ICharacter
{
private:

std::string name;
AMateria *inv[4];

public:
Character();
Character(std::string name);
Character(const Character &copy);
~Character();
Character & operator=(const Character &assign);
std::string const & getName() const;
void equip(AMateria* m);
void unequip(int idx);
void use(int idx, ICharacter& target);
};

#endif