#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default_type"){
    std::cout << "WrongAnimal " << _type << " default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &name) : _type(name){
    std::cout << "WrongAnimal " << _type << " named constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
    std::cout << "WrongAnimal " << _type << " copy constructor called" << std::endl;
    this->_type = other._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    if (this != &other)
        this->_type = other._type;
    return *this; 
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal " << _type << " destructor called" <<std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}	

std::string WrongAnimal::getType() const {
    return this->_type;
}
