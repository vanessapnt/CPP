#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = "an idea";
}

Brain::Brain(const std::string &name) {
    std::cout << "Brain named constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = "an idea";
}

Brain::Brain(const Brain& other){
    std::cout << "Brain copy constructor called" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];  
}

Brain& Brain::operator=(const Brain& other){
    if (this != &other)
    {
        for(int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    }
    return *this; 
}

Brain::~Brain(){
    std::cout << "Brain destructor called" <<std::endl;
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100)
        return ideas[index];
    else
        return "Invalid index\n";
}