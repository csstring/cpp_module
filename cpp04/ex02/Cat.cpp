#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	setType("Cat");
	std::cout << "Cat construtor called.." << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
}

Cat& Cat::operator=(const Cat &ref)
{
	setType(ref.getType());
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called.." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow.. meow.. meow..!" << std::endl;
}