#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	setType("Cat");
	brain = new Brain();
	std::cout << "Cat construtor called.." << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
}

Cat& Cat::operator=(const Cat &ref)
{
	setType(ref.getType());
	*this->brain = *ref.getBrain();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called.." << std::endl;
	delete brain;
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