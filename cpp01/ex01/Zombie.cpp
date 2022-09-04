#include "Zombie.hpp"
#include <iostream>

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{}

Zombie::Zombie(void)
{
    name = "anonymity";
}

Zombie::~Zombie(void)
{
    std::cout << name << ": is destroyed" << std::endl;
}