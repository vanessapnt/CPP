#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

/*
In polymorphism, virtual enables dynamic dispatch—it ensures the correct
overridden method is called based on the actual object type (not the pointer type).

Animal* animal = new Cat();
animal->makeSound(); // Calls Animal::makeSound() (early/static binding)

Animal* animal = new Cat();
animal->makeSound(); // Calls Cat::makeSound() (late/dynamic binding)
*/

class Animal
{
	protected :
		std::string _type;

	public :
		Animal();
		Animal(const std::string &name);
		Animal(const Animal& other);
		Animal &operator=(const Animal& other);
		virtual ~Animal(); //it calls ~Cat() and then ~Animal()

		virtual void makeSound() const;
		std::string getType() const;
};

#endif