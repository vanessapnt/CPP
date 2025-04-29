#include "ClapTrap.hpp"

int main()
{
	// Test constructors and assignment
	ClapTrap default_trap;
	ClapTrap named_trap("Fighter");
	ClapTrap copy_trap(named_trap);
	
	std::cout << "\n=== Testing attacks ===" << std::endl;
	// Test attack and energy points
	for (int i = 0; i < 11; i++)
	{
		std::cout << "\nEnergy points left: " << default_trap.getEnergyPoints() << std::endl;
		default_trap.attack("Enemy");
	}
	
	std::cout << "\n=== Testing damage ===" << std::endl;
	// Test taking damage and repairs
	named_trap.takeDamage(5);
	std::cout << "HP after damage: " << named_trap.getHitPoints() << std::endl;
	named_trap.beRepaired(2);
	std::cout << "HP after repair: " << named_trap.getHitPoints() << std::endl;
	
	std::cout << "\n=== Testing death ===" << std::endl;
	// Test death scenario
	named_trap.takeDamage(20);
	named_trap.attack("Enemy");
	named_trap.beRepaired(5);
	
	return 0;
}