#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    //AAnimal error; 
    const int arraySize = 4;
    AAnimal* animals[arraySize];

    std::cout << "\nCréation des animaux:" << std::endl;
    for (int i = 0; i < arraySize/2; i++) {
        animals[i] = new Dog();
    }
    for (int i = arraySize/2; i < arraySize; i++) {
        animals[i] = new Cat();
    }

    std::cout << "\nTest des sons:" << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << animals[i]->getType() << "'s sound: ";
        animals[i]->makeSound();
    }

    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }

    return 0;
}
