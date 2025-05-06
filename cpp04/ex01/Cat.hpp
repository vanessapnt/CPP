#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public : 
		Cat();
		Cat(const std::string &name);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();

		void makeSound () const;
		Brain* getBrain() const;

	private :
		Brain* _brain;
};

#endif