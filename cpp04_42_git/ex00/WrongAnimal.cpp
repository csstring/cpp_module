#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	this->type.assign("Wrong meta_mong");
	std::cout << "WrongAnimal construtor called.." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ref)
{
	this->type.assign(ref.getType());
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

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}