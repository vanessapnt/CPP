#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

/*
In polymorphism, virtual enables dynamic dispatch—it ensures the correct
overridden method is called based on the actual object type (not the pointer type).

AAnimal* animal = new Cat();
animal->makeSound(); // Calls AAnimal::makeSound() (early/static binding)

AAnimal* animal = new Cat();
animal->makeSound(); // Calls Cat::makeSound() (late/dynamic binding)
*/

class AAnimal
{
    protected:
        std::string _type;

    public:
        AAnimal();
        AAnimal(const std::string &name);
        AAnimal(const AAnimal& other);
        AAnimal &operator=(const AAnimal& other);
        virtual ~AAnimal();

        virtual void makeSound() const = 0;  // Pure virtual method
        std::string getType() const;
};

#endif