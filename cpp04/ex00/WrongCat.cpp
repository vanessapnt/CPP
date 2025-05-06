#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << _type << " default constructor called" << std::endl;
}

WrongCat::WrongCat(const std::string &name) : WrongAnimal(name){
    std::cout << _type << " named constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
    std::cout << _type << " copy construc3tor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    if (this != &other)
        WrongAnimal::operator=(other);
    return *this; 
}

WrongCat::~WrongCat(){
    std::cout << _type << " destructor called" <<std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Wrong Miaou" << std::endl;
}	
