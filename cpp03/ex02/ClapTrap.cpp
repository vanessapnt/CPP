#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("unnamed"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap named constructor called for " << this->Name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->Name = other.getName();
		this->HitPoints = other.getHitPoints();
		this->EnergyPoints = other.getEnergyPoints();
		this->AttackDamage = other.getAttackDamage();
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

std::string ClapTrap::getName() const
{
	return this->Name;
}
int ClapTrap::getHitPoints() const
{
	return this->HitPoints;
}
int ClapTrap::getEnergyPoints() const
{
	return this->EnergyPoints;
}
int ClapTrap::getAttackDamage() const
{
	return this->AttackDamage;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " has no energy points left to attack!" << std::endl;
		return;
	}
	if (this->HitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " is dead and cannot attack!" << std::endl;
		return;
	}
	this->EnergyPoints--;
	std::cout << "ClapTrap " << this->Name << " attacks " << target 
			  << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " is already dead!" << std::endl;
		return;
	}
	this->HitPoints -= amount;
	std::cout << "ClapTrap " << this->Name << " takes " << amount 
			  << " points of damage!" << std::endl;
	if (this->HitPoints <= 0)
		std::cout << "ClapTrap " << this->Name << " has died!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " has no energy points left to repair!" << std::endl;
		return;
	}
	if (this->HitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->Name << " is dead and cannot repair!" << std::endl;
		return;
	}
	this->EnergyPoints--;
	this->HitPoints += amount;
	std::cout << "ClapTrap " << this->Name << " repairs itself for " 
			  << amount << " hit points!" << std::endl;
}
