#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << "=== Testing ScavTrap ===" << std::endl;
    ScavTrap scav("Scav");
    
    std::cout << "\n=== ScavTrap Stats ===" << std::endl;
    std::cout << "Name: " << scav.getName() << std::endl;
    std::cout << "Hit Points: " << scav.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << scav.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << scav.getAttackDamage() << std::endl;
    
    std::cout << "\n=== Testing FragTrap ===" << std::endl;
    FragTrap frag("Frag");
    
    std::cout << "\n=== FragTrap Stats ===" << std::endl;
    std::cout << "Name: " << frag.getName() << std::endl;
    std::cout << "Hit Points: " << frag.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << frag.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << frag.getAttackDamage() << std::endl;
    
    std::cout << "\n=== Testing DiamondTrap ===" << std::endl;
    DiamondTrap diamond("Diamond");
    
    std::cout << "\n=== DiamondTrap Stats ===" << std::endl;
    std::cout << "Name: " << diamond.getName() << std::endl;
    std::cout << "Hit Points: " << diamond.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << diamond.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << diamond.getAttackDamage() << std::endl;
    
    std::cout << "\n=== Testing Actions ===" << std::endl;
    diamond.attack("Enemy");
    diamond.takeDamage(30);
    diamond.beRepaired(10);
    diamond.highFivesGuys();
    diamond.whoAmI();
    
    return 0;
}