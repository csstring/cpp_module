#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	std::cout << "Cat construtor called.." << std::endl;
	this->type.assign("Cat");
	brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
}

Cat& Cat::operator=(const Cat &ref)
{
	this->type.assign(ref.getType());
	*this->brain = *ref.getBrain();
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor called.." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow.. meow.. meow..!" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}

void	Cat::setBrainIdeas(int i, std::string idea)
{
	brain->setIdeas(i, idea);
}
void	Cat::showBrainIdeas() const
{
	brain->showIdeas();
}