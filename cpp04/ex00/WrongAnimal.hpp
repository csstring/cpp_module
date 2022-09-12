#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>

class WrongAnimal
{
protected:
	std::string type;	
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal& operator=(const WrongAnimal &ref);
	~WrongAnimal();
	void makeSound() const;
	void setType(std::string name);
	std::string getType() const;
};

#endif