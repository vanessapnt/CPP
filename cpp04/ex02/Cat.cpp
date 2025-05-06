#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"){
    _brain = new Brain();
    std::cout << _type << " default constructor called" << std::endl;
}

Cat::Cat(const std::string &name) : AAnimal(name){
    _brain = new Brain();
    std::cout << _type << " named constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other){
    _brain = new Brain(*other._brain);
    std::cout << _type << " copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other){
    if (this != &other)
    {
        AAnimal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);        
    }
    return *this; 
}

Cat::~Cat(){
    delete _brain;
    std::cout << _type << " destructor called" <<std::endl;
}

void Cat::makeSound() const {
    std::cout << "Miaou" << std::endl;
}	

Brain* Cat::getBrain() const{
    return _brain;
}
