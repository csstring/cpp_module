#include "Weapon.hpp"
#include <iostream>

const std::string& Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type.assign(type);
}

Weapon::Weapon(std::string type)
{
    this->type.assign(type);
}

Weapon::Weapon(void)
{
    this->type.assign("don't have Weapon");
}

Weapon::~Weapon(void)
{
    std::cout << "destroyed "<< getType() << std::endl;
}
