#include "FragTrap.hpp"

// The base class ClapTrap must be constructed first via initialization list
// Then we can modify its protected members in the derived class constructor body
FragTrap::FragTrap() : ClapTrap()
{
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

// All members are inherited from ClapTrap, so the base class copy constructor handles everything
// No FragTrap-specific members to copy
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
	std::cout << "FragTrap named constructor called for " << this->getName() << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		
		// If FragTrap had any specific members, we would handle them here
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->HitPoints <= 0)
    {
        std::cout << "FragTrap " << this->getName() << " is dead and cannot request high fives!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->getName() << " enthusiastically requests high fives from everyone!" << std::endl;
}