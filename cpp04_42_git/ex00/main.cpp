#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

void main2()
{
	std::cout << "-----------Animal------------" << std::endl;
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << "-----------Animal end------------" << std::endl;

	std::cout << "\n-----------WrongAnimal------------" << std::endl;
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	std::cout << wrongmeta->getType() << std::endl;
	std::cout << k->getType() << " " << std::endl;
	wrongmeta->makeSound(); //will output the cat sound! 
	k->makeSound();
	delete wrongmeta;
	delete k;
	std::cout << "-----------WrongAnimal end------------" << std::endl;
}

int main() 
{
	main2();
	system("leaks a.out");
	return 0; 
}