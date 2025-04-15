#include <iostream>

class Zombie
{
    private :
        std::string name;
    public :
        Zombie(std::string name); //constructor
        ~Zombie(void); //destructor
        void announce(void);
};

