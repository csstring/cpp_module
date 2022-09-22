#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	this->type.assign("WrongCat");
	std::cout << "WrongCat construtor called.." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &ref)
{
	this->type.assign(ref.getType());
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called.." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "meow.. meow.. meow..!" << std::endl;
}