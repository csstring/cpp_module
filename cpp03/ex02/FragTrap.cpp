#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "(FragTrap)Default constructor called : name is:" << getName() << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "(FragTrap name)constructor called : name is:" << getName() << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

FragTrap::FragTrap(const FragTrap& copy)
{
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &ref)
{
	setName(ref.getName());
	setHitPoints(ref.getHitPoints());
	setEnergyPoints(ref.getEnergyPoints());
	setAttackDamage(ref.getAttackDamage());
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "(FragTrap)Destructor called : name is: "<< getName() << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "highFivesGuys!!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	displayStatus();
	std::cout << getName() << " : try attack..."<< std::endl;
	if (getHitPoints() <= 0)
		std::cout << getName() << " is already dead!! so can't attack target"<< std::endl;
	else if (getEnergyPoints() <= 0)
		std::cout << getName() << ": energyPoints is zero!! so, can't attack target" << std::endl;
	else
	{
		std::cout << "FragTrap " << getName() <<  " attacks " << target<< ", causing "<< getAttackDamage() <<" points of damage!" << std::endl;
		setEnergyPoints(getEnergyPoints() - 1);
	}
	displayStatus();
}