#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain construtor called..." << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
}

Brain& Brain::operator=(const Brain &ref)
{
	for (int i = 0; i < 100; i++)
		setIdeas(i, ref.getIdeas(i));
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called..." << std::endl;
}

void	Brain::setIdeas(int i, std::string temp)
{
	this->ideas[i].assign(temp);
}

std::string	Brain::getIdeas(int i) const
{
	return (ideas[i]);
}

void	Brain::showIdeas(void) const
{
	std::string temp;

	for (int i = 0; i < 100; i++)
	{
		temp.assign(getIdeas(i));
		if (!temp.empty())
			std::cout << "index : " << i << " "<< temp << std::endl;
	}
}