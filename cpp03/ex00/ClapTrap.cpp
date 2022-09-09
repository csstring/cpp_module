#include "ClapTrap.hpp"
#include <iostream>
#include "climits"

ClapTrap::ClapTrap() : name("UnKnown"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called : name is:" << name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "(name) constructor called : name is:" << name << std::endl;
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
	std::cout << "Destructor called : name is: "<< name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	displayStatus();
	if (hitPoints <= 0)
		std::cout << name << "is already dead!! so can't attack" << std::endl;
	else if (energyPoints <= 0)
		std::cout << name << ": energyPoints is zero!! so, can't attack" << std::endl;
	else
	{
		std::cout << "ClapTrap " << name <<  " attacks" << target<< ", causing"<< attackDamage <<" points of damage!" << std::endl;
		energyPoints--;
	}
	displayStatus();
}

void ClapTrap::takeDamage(unsigned int amount)
{
	displayStatus();
	if (hitPoints <= 0)
		std::cout << name << "is already dead!! so can't attack" << std::endl;
	else if (hitPoints < amount)
	{
		std::cout << "ClapTrap " << name <<  " take" << attackDamage <<" points of damage!" << std::endl;
		hitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << name <<  " take" << attackDamage <<" points of damage!" << std::endl;
		hitPoints -= amount;
	}
	displayStatus();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	displayStatus();
	if (hitPoints <= 0)
		std::cout << name << ": hitPoints is zero!! so, can't attack" << std::endl;
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

void	ClapTrap::displayStatus(void)
{
	std::cout << "-------- status --------" << std::endl;
	std::cout << "name : " << name << std::endl;
	std::cout << "hitPoints : " << hitPoints << std::endl;
	std::cout << "energyPoints : " << energyPoints << std::endl;
	std::cout << " attackDamage : " << attackDamage << std::endl;
	std::cout << "------ status end------" << std::endl;
}