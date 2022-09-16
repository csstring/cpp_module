#include "ClapTrap.hpp"
#include "climits"

int main(void)
{
	ClapTrap a("schoe");
	ClapTrap b("Songpyeon");
	a.attack("Songpyeon");
	b.takeDamage(a.getAttackDamage());
	a.beRepaired(UINT32_MAX);
	a.takeDamage(10000000);
	a.takeDamage(10000000);
	a.attack("Songpyeon");
	a.beRepaired(100);
	return (0);
}