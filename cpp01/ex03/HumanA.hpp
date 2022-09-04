#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &temp;
public:
    HumanA(std::string name, Weapon &temp);
    ~HumanA(void);
    void attack(void);
};

#endif