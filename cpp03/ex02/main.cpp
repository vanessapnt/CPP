#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "=== Testing Constructors ===" << std::endl;
    ScavTrap default_scav;
    ScavTrap named_scav("Guardian");
    ScavTrap copy_scav(named_scav);

    std::cout << "\n=== Testing Basic Actions ===" << std::endl;
    named_scav.attack("Enemy");
    named_scav.takeDamage(30);
    named_scav.beRepaired(10);
    named_scav.guardGate();

    std::cout << "\n=== Testing Energy Points ===" << std::endl;
    for (int i = 0; i < 51; i++)
    {
        std::cout << "\nEnergy points left: " << named_scav.getEnergyPoints() << std::endl;
        named_scav.attack("Target");
    }

    std::cout << "\n=== Testing Death Scenario ===" << std::endl;
    named_scav.takeDamage(100);
    named_scav.attack("Enemy");
    named_scav.beRepaired(50);
    named_scav.guardGate();    

    std::cout << "\n=== Testing Assignment Operator ===" << std::endl;
    ScavTrap assign_scav;
    assign_scav = named_scav;

	std::cout << "\n=== More Tests ===" << std::endl;
	ScavTrap scav1("Warrior");
	ScavTrap scav2 = scav1; // Test copy
	scav1 = ScavTrap("New"); // Test assignation

    std::cout << "\n=== Testing FragTrap ===" << std::endl;
    FragTrap frag("FragMaster");
    frag.attack("Enemy");
    frag.takeDamage(50);
    frag.beRepaired(20);
    frag.highFivesGuys();

    return 0;
}