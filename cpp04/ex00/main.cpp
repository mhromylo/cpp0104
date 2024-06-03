#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongAnimal.hpp"
#include"WrongCat.hpp"

int main()
{
const Animal *meta = new Animal();
const Animal *j = new Dog();
const Animal *i = new Cat();
const WrongAnimal *w = new WrongAnimal();
const WrongAnimal *wc = new WrongCat();
const WrongCat *wcat = new WrongCat();
std::cout << j->getType() << std::endl;
std::cout << i->getType() << std::endl;
std::cout << wc->getType() << std::endl;
i->makeSound();
j->makeSound();
wc->makeSound();
w->makeSound();
wcat->makeSound();
meta->makeSound();
delete meta;
delete j;
delete i;
delete wc;
delete w;
return 0;
}