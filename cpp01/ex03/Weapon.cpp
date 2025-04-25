#include "Weapon.hpp"

Weapon::Weapon(void) : type("default") {}

Weapon::Weapon(const std::string& input_type) : type(input_type) {} //initializes the type with the input

Weapon::~Weapon(void) {}

const std::string& Weapon::getType() const
{
    return this->type;
}

void Weapon::setType(const std::string& input_type) //modifies the type
{
    this->type = input_type;
}
