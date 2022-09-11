#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "(ScavTrap)Default constructor called : name is:" << getName() << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "(ScavTrap name)constructor called : name is:" << getName() << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ref)
{
	setName(ref.getName());
	setHitPoints(ref.getHitPoints());
	setEnergyPoints(ref.getEnergyPoints());
	setAttackDamage(ref.getAttackDamage());
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "(ScavTrap)Destructor called : name is: "<< getName() << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	displayStatus();
	std::cout << getName() << " : try attack..."<< std::endl;
	if (getHitPoints() <= 0)
		std::cout << getName() << " is already dead!! so can't attack target"<< std::endl;
	else if (getEnergyPoints() <= 0)
		std::cout << getName() << ": energyPoints is zero!! so, can't attack target" << std::endl;
	else
	{
		std::cout << "ScavpTrap " << getName() <<  " attacks " << target<< ", causing "<< getAttackDamage() <<" points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	displayStatus();
}