#include"Dog.hpp"
#include"Cat.hpp"

int main()
{
	
	const int dogsCount = 3;
	Dog* dogs[dogsCount];

	for (int i = 0; i < dogsCount; ++i) {
		dogs[i] = new Dog();
		dogs[i]->makeSound();
		dynamic_cast<Dog*>(dogs[i])->getBrain()->setIdeas("woof");
		dynamic_cast<Dog*>(dogs[i])->getBrain()->showIdeas();
	}
	
	Dog d;
	d.getBrain()->setIdeas("grr");
	Dog b = Dog(d);
	b.getBrain()->showIdeas();

	for (int i = 0; i < dogsCount; ++i) {
		delete dogs[i];
	}
	std::cout << "========================================================" <<std::endl;
	Dog *a = new Dog;
	a->makeSound();
	delete a;
	std::cout << "========================================================" <<std::endl;
	return 0;
}