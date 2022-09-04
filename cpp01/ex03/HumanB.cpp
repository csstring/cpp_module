#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
    std::cout << name << " is created"<< std::endl;
}

HumanB::~HumanB(void)
{
     std::cout << name <<" is destroyed"<< std::endl;
}

void    HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}