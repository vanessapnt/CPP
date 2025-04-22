#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
