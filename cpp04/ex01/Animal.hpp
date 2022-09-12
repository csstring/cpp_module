#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>

class Animal
{
protected:
	std::string type;	
public:
	Animal();
	Animal(const Animal &copy);
	Animal& operator=(const Animal &ref);
	virtual ~Animal();
	virtual void makeSound() const;
	void setType(std::string name);
	std::string getType() const;
};

#endif