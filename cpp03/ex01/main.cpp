#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n🔧 Testing ClapTrap and ScavTrap Constructors 🔧\n" << std::endl;
    
    ClapTrap clap("Basic Clap");

    ScavTrap scav("Super Scav");
    ScavTrap scav_copy(scav);
    ScavTrap scav_assign;
    scav_assign = scav;

    std::cout << "\n📊 Testing Stats 📊\n" << std::endl;
    std::cout << "ClapTrap " << clap.getName() << " stats:" << std::endl;
    std::cout << "HP: " << clap.getHitPoints() << std::endl;
    std::cout << "Energy: " << clap.getEnergyPoints() << std::endl;
    std::cout << "Attack: " << clap.getAttackDamage() << std::endl;

    std::cout << "\nScavTrap " << scav.getName() << " stats:" << std::endl;
    std::cout << "HP: " << scav.getHitPoints() << std::endl;
    std::cout << "Energy: " << scav.getEnergyPoints() << std::endl;
    std::cout << "Attack: " << scav.getAttackDamage() << std::endl;

    std::cout << "\n⚔️ Testing Combat Functions ⚔️\n" << std::endl;
    
    clap.attack("Enemy");
    scav.attack("Big Enemy");

    std::cout << "\n🛠️ Testing Damage and Repair 🛠️\n" << std::endl;
    scav.takeDamage(30);
    std::cout << "ScavTrap HP after damage: " << scav.getHitPoints() << std::endl;
    scav.beRepaired(15);
    std::cout << "ScavTrap HP after repair: " << scav.getHitPoints() << std::endl;

    std::cout << "\n🛡️ Testing Guard Gate 🛡️\n" << std::endl;
    scav.guardGate();

    std::cout << "\n⚠️ Testing Critical Situations ⚠️\n" << std::endl;
    
    std::cout << "💀 Testing death scenario 💀" << std::endl;
    scav.takeDamage(100);
    scav.attack("Enemy");
    scav.guardGate();
    
    std::cout << "🪫 Testing energy depletion 🪫" << std::endl;
    ScavTrap energy_test("Energy Tester");
    for (int i = 0; i < 51; i++) {
        energy_test.attack("Target");
    }

    std::cout << "\n🏁 End of Tests 🏁" << std::endl;
    
    return 0;
}