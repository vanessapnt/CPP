#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n🔧 Testing Constructors 🔧\n" << std::endl;
    
    ClapTrap clap("Basic Clap");
    ScavTrap scav("Super Scav");
    FragTrap frag("Ultra Frag");

    FragTrap frag_copy(frag);
    FragTrap frag_assign;
    frag_assign = frag;

    std::cout << "\n📊 Testing Stats 📊\n" << std::endl;
    std::cout << "ClapTrap " << clap.getName() << " stats:" << std::endl;
    std::cout << "HP: " << clap.getHitPoints() << std::endl;
    std::cout << "Energy: " << clap.getEnergyPoints() << std::endl;
    std::cout << "Attack: " << clap.getAttackDamage() << std::endl;

    std::cout << "\nScavTrap " << scav.getName() << " stats:" << std::endl;
    std::cout << "HP: " << scav.getHitPoints() << std::endl;
    std::cout << "Energy: " << scav.getEnergyPoints() << std::endl;
    std::cout << "Attack: " << scav.getAttackDamage() << std::endl;

    std::cout << "\nFragTrap " << frag.getName() << " stats:" << std::endl;
    std::cout << "HP: " << frag.getHitPoints() << std::endl;
    std::cout << "Energy: " << frag.getEnergyPoints() << std::endl;
    std::cout << "Attack: " << frag.getAttackDamage() << std::endl;

    std::cout << "\n⚔️ Testing Combat Functions ⚔️\n" << std::endl;
    clap.attack("Enemy");
    scav.attack("Big Enemy");
    frag.attack("Huge Enemy");

    std::cout << "\n🪄 Testing Special Abilities 🪄\n" << std::endl;
    scav.guardGate();
    frag.highFivesGuys();

    std::cout << "\n🛠️ Testing Damage and Repair 🛠️\n" << std::endl;
    std::cout << "Initial FragTrap HP: " << frag.getHitPoints() << std::endl;
    frag.takeDamage(50);
    std::cout << "FragTrap HP after damage: " << frag.getHitPoints() << std::endl;
    frag.beRepaired(30);
    std::cout << "FragTrap HP after repair: " << frag.getHitPoints() << std::endl;

    std::cout << "\n⚠️ Testing Critical Situations ⚠️\n" << std::endl;
    
    std::cout << "💀 Testing death scenario 💀" << std::endl;
    frag.takeDamage(200);
    frag.attack("Enemy");
    frag.highFivesGuys();

    std::cout << "\n🪫 Testing energy depletion 🪫" << std::endl;
    FragTrap energy_test("Energy Tester");
    for (int i = 0; i < 101; i++) {
        energy_test.attack("Target");
    }

    std::cout << "\n🏁 End of Tests 🏁" << std::endl;
    
    return 0;
}