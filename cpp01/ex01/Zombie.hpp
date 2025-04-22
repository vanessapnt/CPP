#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private :
		std::string name;
	public :
		Zombie(void); //default constructor
		Zombie(std::string name); //constructor called when comes with argument
		~Zombie(void); //destructor
		void setName(std::string name);
		void announce(void) const;
};

Zombie* zombieHorde( int N, std::string name );

#endif
