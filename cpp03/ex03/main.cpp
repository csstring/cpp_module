#include "DiamondTrap.hpp"
#include "climits"
#include <iostream>

int main(void)
{
	DiamondTrap a("schoe");
//	DiamondTrap b("Songpyeon");

	std::cout << a.ClapTrap::getName() << std::endl;
	std::cout << a.DiamondTrap::getName() << std::endl;
	std::cout << a.FragTrap::getHitPoints() << std::endl;
	std::cout << a.ScavTrap::getEnergyPoints() << std::endl;
	std::cout << a.FragTrap::getAttackDamage() << std::endl;
	a.whoAmI();
	return (0);
}