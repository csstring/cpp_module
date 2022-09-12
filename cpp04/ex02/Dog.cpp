#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	setType("Dog");
	std::cout << "Dog construtor called.." << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
}

Dog& Dog::operator=(const Dog &ref)
{
	setType(ref.getType());
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called.." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof!! woof!! woof!!!" << std::endl;
}