#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << _type << " default constructor called" << std::endl;
}

Cat::Cat(const std::string &name) : Animal(name){
    std::cout << _type << " named constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
    std::cout << _type << " copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    if (this != &other)
        Animal::operator=(other);
    return *this; 
}

Cat::~Cat(){
    std::cout << _type << " destructor called" <<std::endl;
}

void Cat::makeSound() const {
    std::cout << "Miaou" << std::endl;
}	
