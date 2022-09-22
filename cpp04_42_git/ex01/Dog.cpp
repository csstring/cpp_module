#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	this->type.assign("Dog");
	std::cout << "Dog construtor called.." << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
}

Dog& Dog::operator=(const Dog &ref)
{
	this->type.assign(ref.getType());
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

Brain* Dog::getBrain() const
{
	return (this->brain);
}

void	Dog::setBrainIdeas(int i, std::string idea)
{
	brain->setIdeas(i, idea);
}

void	Dog::showBrainIdeas() const
{
	brain->showIdeas();
}