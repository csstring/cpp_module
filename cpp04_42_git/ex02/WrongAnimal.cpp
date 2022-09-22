#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	setType("Wrong meta_mong");
	std::cout << "WrongAnimal construtor called.." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ref)
{
	this->type.assign(ref.type);
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called.." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "..................." << std::endl;
}

void	WrongAnimal::setType(std::string name)
{
	type.assign(name);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}