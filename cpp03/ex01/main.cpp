#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "climits"

int main(void)
{
	ScavTrap a("schoe");
	ScavTrap b("Songpyeon");

	for (int i = 0; i <100 ; i++)
		a.beRepaired(1);
	a.attack("Songpyeon");
	b.takeDamage(10000000);
	b.beRepaired(1);
	b.takeDamage(a.getAttackDamage());
	a.beRepaired(UINT32_MAX);
	a.takeDamage(10000000);
	a.takeDamage(10000000);
	a.attack("Songpyeon");
	b.takeDamage(a.getAttackDamage());
	a.beRepaired(100);
	return (0);
}