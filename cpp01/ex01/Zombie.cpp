#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->name = "default";
}

void Zombie::announce(void) const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
