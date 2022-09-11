#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->name.assign("unknown Dia");
	std::cout << "(DiamondTrap)Default constructor called : name is:" << name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(), FragTrap(), name(name)
{
	this->setName(this->name + "_clap_name");
	std::cout << "(DiamondTrap name)Default constructor called : name is:" << this->name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &ref)
{std::cout << "(DiamondTrap)Default operator called " << std::endl;
	setName(ref.getName());
	setHitPoints(ref.getHitPoints());
	setEnergyPoints(ref.getEnergyPoints());
	setAttackDamage(ref.getAttackDamage());
	this->name.assign(ref.name);
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "(DiamondTrap)Destructor called : name is: "<< name << std::endl;
}

std::string DiamondTrap::getName(void) const
{
	return (this->name);
}

void DiamondTrap::whoAmI() const
{
	std::cout << "who Am I!!" << std::endl;
	std::cout << "ClapTrap name : " << ClapTrap::getName() << std::endl;
	std::cout << "DiamondTrap name : " << DiamondTrap::getName() << std::endl;
}