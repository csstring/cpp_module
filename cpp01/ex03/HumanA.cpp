#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &temp) : name(name), temp(temp)
{
    std::cout << name << " is created"<< std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << name <<" is destroyed"<< std::endl;
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << temp.getType() << std::endl;
}