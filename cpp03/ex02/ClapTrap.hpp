#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap& operator=(const ClapTrap &ref);
	~ClapTrap();

	unsigned int getAttackDamage(void) const;
	unsigned int getHitPoints(void) const;
	unsigned int getEnergyPoints(void) const;
	std::string getName(void) const;
	void setHitPoints(unsigned int amount);
	void setAttackDamage(unsigned int amount);
	void setEnergyPoints(unsigned int amount);
	void setName(std::string name);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void displayStatus() const;
};

#endif