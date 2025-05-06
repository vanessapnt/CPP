#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("default_type"){
    std::cout << "AAnimal " << _type << " default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &name) : _type(name){
    std::cout << "AAnimal " << _type << " named constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other){
    std::cout << "AAnimal " << _type << " copy constructor called" << std::endl;
    this->_type = other._type;
}

AAnimal& AAnimal::operator=(const AAnimal& other){
    if (this != &other)
        this->_type = other._type;
    return *this; 
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal " << _type << " destructor called" <<std::endl;
}

void AAnimal::makeSound() const {
    std::cout << "animal sound" << std::endl;
}	

std::string AAnimal::getType() const {
    return this->_type;
}
