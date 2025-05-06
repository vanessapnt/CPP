#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << _type << " default constructor called" << std::endl;
}

Dog::Dog(const std::string &name) : Animal(name){
    std::cout << _type << " named constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other){
    std::cout << _type << " copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    if (this != &other)
        Animal::operator=(other);
    return *this; 
}

Dog::~Dog(){
    std::cout << _type << " destructor called" <<std::endl;
}

void Dog::makeSound() const {
    std::cout << "Waf" << std::endl;
}
