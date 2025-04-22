#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

/*
Use const std::string& for constructor parameters when:
✔ You need read-only access to the original object.
✔ You want zero-copy efficiency.
✔ The input must never be null.
*/

class Weapon
{
    private :
        std::string type;
    public :
        Weapon(); //default constructor
        Weapon(const std::string& input_type);
        ~Weapon(); //destructor

        const std::string& getType();
        void setType(std::string& input_type); //ref because type is not going to be modified
};

#endif