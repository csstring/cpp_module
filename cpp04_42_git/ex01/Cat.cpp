#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	this->type.assign("Cat");
	std::cout << "Cat construtor called.." << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
}

Cat& Cat::operator=(const Cat &ref)
{
	this->type.assign(ref.getType());
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