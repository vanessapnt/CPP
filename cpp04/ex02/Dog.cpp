#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"){
    _brain = new Brain();
    std::cout << _type << " default constructor called" << std::endl;
}

Dog::Dog(const std::string &name) : AAnimal(name){
    _brain = new Brain();
    std::cout << _type << " named constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other){
    _brain = new Brain(*other._brain);
    std::cout << _type << " copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other){
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);        
    }
    return *this; 
}

Dog::~Dog(){
    delete _brain;
    std::cout << _type << " destructor called" <<std::endl;
}

void Dog::makeSound() const {
    std::cout << "Waf" << std::endl;
}
