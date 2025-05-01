#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n🔧 Testing Constructors 🔧" << std::endl;
    
    // Test default constructor
    ClapTrap default_trap;
    
    // Test name constructor
    ClapTrap named_trap("Fighter");
    
    // Test copy constructor
    ClapTrap copy_trap(named_trap);
    
    // Test assignment operator
    ClapTrap assigned_trap;
    assigned_trap = named_trap;

    std::cout << "\n🎣 Testing Getters 🎣" << std::endl;
    std::cout << "Default trap name: " << default_trap.getName() << std::endl;
    std::cout << "Named trap name: " << named_trap.getName() << std::endl;
    std::cout << "Copy trap name: " << copy_trap.getName() << std::endl;
    std::cout << "Assigned trap name: " << assigned_trap.getName() << std::endl;

    std::cout << "\nInitial stats for " << named_trap.getName() << ":" << std::endl;
    std::cout << "Hit Points: " << named_trap.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << named_trap.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << named_trap.getAttackDamage() << std::endl;

    std::cout << "\n⚔️ Testing Combat Functions ⚔️" << std::endl;

    std::cout << "\n🪫 Testing Energy 🪫" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "\nEnergy before attack: " << named_trap.getEnergyPoints() << std::endl;
        named_trap.attack("Enemy");
    }

    std::cout << "\n🛠️ Testing Damage and Repair 🛠️" << std::endl;
    std::cout << "Initial HP: " << named_trap.getHitPoints() << std::endl;
    named_trap.takeDamage(5);
    std::cout << "HP after taking 5 damage: " << named_trap.getHitPoints() << std::endl; 
    named_trap.beRepaired(3);
    std::cout << "HP after repairing 3: " << named_trap.getHitPoints() << std::endl;

    std::cout << "\n⚠️ Testing Critical Situations ⚠️\n" << std::endl;
    std::cout << "💀 Testing death scenario 💀" << std::endl;
    named_trap.takeDamage(20);
    named_trap.attack("Enemy");
    named_trap.beRepaired(5);

    std::cout << "🪫 Testing energy depletion 🪫" << std::endl;
    for (int i = 0; i < 11; i++) {
        default_trap.attack("Target");
    }

    std::cout << "\n🏁 End of Tests 🏁" << std::endl;
    
    return 0;
}