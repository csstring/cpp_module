#include "ClapTrap.hpp"
#include <iostream>
#include "climits"

ClapTrap::ClapTrap() : name("UnKnown"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "(ClapTrap)Default constructor called : name is:" << name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "(ClapTrap name) constructor called : name is:" << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ref)
{
	this->name.assign(ref.name);
	this->hitPoints = ref.hitPoints;
	this->energyPoints = ref.energyPoints;
	this->attackDamage = ref.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "(ClapTrap)Destructor called : name is: "<< this->name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	displayStatus();
	std::cout << name << " : try attack..."<< std::endl;
	if (hitPoints <= 0)
		std::cout << name << " is already dead!! so can't attack target"<< std::endl;
	else if (energyPoints <= 0)
		std::cout << name << ": energyPoints is zero!! so, can't attack target" << std::endl;
	else
	{
		std::cout << "ClapTrap " << name <<  " attacks " << target<< ", causing "<< attackDamage <<" points of damage!" << std::endl;
		energyPoints--;
	}
	displayStatus();
}

void ClapTrap::takeDamage(unsigned int amount)
{
	displayStatus();
	if (hitPoints <= 0)
		std::cout << name << " is already dead!! so can't take a damage "<< std::endl;
	else if (hitPoints < amount)
	{
		std::cout << name <<  " take " << amount <<" points of damage!" << std::endl;
		hitPoints = 0;
	}
	else
	{
		std::cout << name <<  " take " << amount <<" points of damage!" << std::endl;
		hitPoints -= amount;
	}
	displayStatus();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	displayStatus();
	std::cout << name << " : try Repaire...."<< std::endl;
	if (hitPoints <= 0)
		std::cout << name << ": hitPoints is zero!! so, can't repaire" << std::endl;
	else if (energyPoints <= 0)
		std::cout << name << ": energyPoints is zero!! so, can't repaire" << std::endl;
	else if (hitPoints > UINT32_MAX - amount)
	{
		std::cout << name << ": success Repaire" << std::endl;
		hitPoints = UINT32_MAX;
		energyPoints--;
	}
	else
	{
		std::cout << name << ": success Repaire" << std::endl;
		hitPoints += amount;
		energyPoints--;
	}
	displayStatus();
}

void	ClapTrap::displayStatus(void) const
{
	std::cout << "\n-------- status --------" << std::endl;
	std::cout << "name : " << name << std::endl;
	std::cout << "hitPoints : " << hitPoints << std::endl;
	std::cout << "energyPoints : " << energyPoints << std::endl;
	std::cout << " attackDamage : " << attackDamage << std::endl;
	std::cout << "------ status end------\n" << std::endl;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (attackDamage);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (energyPoints);
}
std::string ClapTrap::getName(void) const
{
	return (this->name);
}

void ClapTrap::setHitPoints(unsigned int amount)
{
	hitPoints = amount;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	attackDamage = amount;
}

void ClapTrap::setEnergyPoints(unsigned int amount)
{
	energyPoints = amount;
}

void ClapTrap::setName(std::string name)
{
	this->name.assign(name);
}