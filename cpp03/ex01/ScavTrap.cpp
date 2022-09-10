#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : name("UnKnown"), hitPoints(10), energyPoints(10), attackDamage(0)
{
}
ScavTrap::ScavTrap(std::string name);
ScavTrap& ScavTrap::operator=(const ScavTrap &ref);
ScavTrap::~ScavTrap();
void ScavTrap::guardGate();