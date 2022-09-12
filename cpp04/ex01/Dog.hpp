#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog &copy);
	Dog& operator=(const Dog &ref);
	virtual ~Dog();
	virtual void makeSound() const;
	Brain* getBrain() const;
	void	setBrainIdeas(int i, std::string idea);
	void	showBrainIdeas() const;
};

#endif