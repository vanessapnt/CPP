#include "DiamondTrap.hpp"

/*
- Why ClapTrap() in init list here ?
When using virtual inheritance, the most derived class (DiamondTrap)
becomes responsible for initializing the virtual base class (ClapTrap)
Intermediate classes (FragTrap, ScavTrap) skip initializing the virtual\
base in their constructors
*/

// The base class ClapTrap must be constructed first via initialization list
// Then we can modify its protected members in the derived class constructor body
DiamondTrap::DiamondTrap() : _name("default")
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

// All members are inherited from ClapTrap, so the base class copy constructor handles everything
// No DiamondTrap-specific members to copy
DiamondTrap::DiamondTrap(const DiamondTrap& other) : 
    ClapTrap(other), 
    ScavTrap(other), 
    FragTrap(other),
    _name(other._name)  // Initialize _name in initialization list
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(), ScavTrap(), _name(name)
{
    ClapTrap::Name = _name + "_clap_name";
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "DiamondTrap named constructor called for " << this->_name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        _name = other._name;
		
		// If DiamondTrap had any specific members, we would handle them here
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am a diamond object " << this->_name << ", I was once known as " << ClapTrap::Name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target); 
}

std::string DiamondTrap::getName() const
{
    return this->_name;
}
