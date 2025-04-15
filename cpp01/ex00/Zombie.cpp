#include "Zombie.hpp"

void Zombie::announce(void)
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

Zombie* newZombie( std::string name )
{
    Zombie* zombie = new Zombie(name);
    return zombie;
}

void randomChump( std::string name)
{
    Zombie zombie(name); //constructor's param
    zombie.announce();
}