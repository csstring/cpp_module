#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
class  ScavTrap : public ClapTrap
{
private:
    std::string name;
	unsigned int energyPoints;
	unsigned int attackDamage; 
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap& operator=(const ScavTrap &ref);
    ~ ScavTrap();
    void guardGate();
};

#endif