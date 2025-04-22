#include "HumanA.hpp"
#include "Weapon.hpp"


//HumanA must always have a weapon → Reference (&) enforces this constraint at compile time
//HumanB might not have a weapon → Pointer (*) allows nullptr

Weapon::attack();
{
    std::cout << this->name << " attacks with their " << this->type << std::endl;
}