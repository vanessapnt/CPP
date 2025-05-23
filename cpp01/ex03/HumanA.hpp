#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
    private :
        Weapon& weapon;
        std::string name;
    public :
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();

        void attack();
};

//we cannot modify the object (a weapon) but we can modify the object's type with setType()

#endif