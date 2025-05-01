#include "ScavTrap.hpp"

// The base class ClapTrap must be constructed first via initialization list
// Then we can modify its protected members in the derived class constructor body
ScavTrap::ScavTrap() : ClapTrap()
{
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

// All members are inherited from ClapTrap, so the base class copy constructor handles everything
// No ScavTrap-specific members to copy
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->HitPoints = 100;      // ScavTrap has different default values
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "ScavTrap named constructor called for " << this->getName() << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		
		// If ScavTrap had any specific members, we would handle them here
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << " destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	ClapTrap::attack(target);
}

void ScavTrap::guardGate()
{
	if (this->HitPoints <= 0)
	{
		std::cout << this->getName() << " is dead and cannot guard gate!" << std::endl;
		return;
	}
	std::cout << this->getName() << " is now in Gate keeper mode" << std::endl;
}
