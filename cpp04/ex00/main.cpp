#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "meta type : " << meta->getType() << std::endl;
    std::cout << "j type : " << j->getType() << std::endl;
    std::cout << "i type : " << i->getType() << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound();

    const WrongAnimal* beta = new WrongAnimal();
    const WrongAnimal* a = new WrongCat();
    std::cout << "beta type : " << beta->getType() << std::endl;
    std::cout << "a type : " << a->getType() << std::endl;
    beta->makeSound();
    a->makeSound();
    
    delete meta;
    delete j;
    delete i;
    delete beta;
    delete a;

    return 0;
}
