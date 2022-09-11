#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap();
    DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &copy);
    DiamondTrap& operator=(const DiamondTrap &ref);
	std::string getName(void) const;
	void whoAmI() const;
	~DiamondTrap();
};

#endif