#include"Dog.hpp"
#include"Cat.hpp"

int main()
{
	const int animalCount = 6;
	Animal* animals[animalCount];

	Animal *a = new Animal;
	a->makeSound();
	for (int i = 0; i < animalCount / 2; ++i) {
		animals[i] = new Dog();
		animals[i]->makeSound();
		dynamic_cast<Dog*>(animals[i])->getBrain()->setIdeas("woof");
		dynamic_cast<Dog*>(animals[i])->getBrain()->showIdeas();
	}
	
	for (int i = animalCount / 2; i < animalCount; ++i) {
		animals[i] = new Cat();
		animals[i]->makeSound();
		Brain *b = dynamic_cast<Cat*>(animals[i])->getBrain();
		b->setIdeas("meow");
		b->showIdeas();
	}
	Dog d;
	d.getBrain()->setIdeas("grr");
	Dog b = Dog(d);
	b.getBrain()->showIdeas();
	for (int i = animalCount; i < animalCount / 2; ++i) {
		
		
	}

	for (int i = 0; i < animalCount; ++i) {
		delete animals[i];
	}
	delete a;
	return 0;
}