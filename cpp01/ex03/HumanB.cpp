#include "HumanB.hpp"
#include "Weapon.hpp"

// Constructor that takes only name - weapon is optional and can be set later
HumanB::HumanB(std::string name) : weapon(NULL), name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack with" << std::endl;
}