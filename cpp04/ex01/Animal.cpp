#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	setType("meta_mong");
	std::cout << "Animal construtor called.." << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
}

Animal& Animal::operator=(const Animal &ref)
{
	this->type.assign(ref.type);
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called.." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "..................." << std::endl;
}

void	Animal::setType(std::string name)
{
	type.assign(name);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}