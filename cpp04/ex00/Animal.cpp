#include "Animal.hpp"

Animal::Animal() : _type("default_type"){
    std::cout << "Animal " << _type << " default constructor called" << std::endl;
}

Animal::Animal(const std::string &name) : _type(name){
    std::cout << "Animal " << _type << " named constructor called" << std::endl;
}

Animal::Animal(const Animal& other){
    std::cout << "Animal " << _type << " copy constructor called" << std::endl;
    this->_type = other._type;
}

Animal& Animal::operator=(const Animal& other){
    if (this != &other)
        this->_type = other._type;
    return *this; 
}

Animal::~Animal(){
    std::cout << "Animal " << _type << " destructor called" <<std::endl;
}

void Animal::makeSound() const {
    std::cout << "animal sound" << std::endl;
}	

std::string Animal::getType() const {
    return this->_type;
}
