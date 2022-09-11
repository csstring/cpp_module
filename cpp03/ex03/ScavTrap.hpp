#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
class  ScavTrap : virtual public ClapTrap
{
private:

public:
    ScavTrap(void);
    ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
    ScavTrap& operator=(const ScavTrap &ref);
    ~ ScavTrap(void);
	void attack(const std::string& target);
    void guardGate(void);
};

#endif