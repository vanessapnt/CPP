#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
	private :
		std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;
		//amount is for damage or healing that you receive

	public :
		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap(const std::string name); 
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
