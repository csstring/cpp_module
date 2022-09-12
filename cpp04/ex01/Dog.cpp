#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	setType("Dog");
	brain = new Brain();
	std::cout << "Dog construtor called.." << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
}

Dog& Dog::operator=(const Dog &ref)
{
	setType(ref.getType());
	*this->brain = *ref.getBrain();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called.." << std::endl;
	delete brain;
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