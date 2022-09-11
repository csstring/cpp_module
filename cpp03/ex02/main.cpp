#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "climits"

int main(void)
{
	FragTrap a("schoe");
	FragTrap b("Songpyeon");

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
	a.highFivesGuys();
	return (0);
}