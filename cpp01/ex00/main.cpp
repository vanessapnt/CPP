#include "Zombie.hpp"

int main() {
    std::string input_name;
    std::cout << "Enter a name for the zombie: ";
    std::getline(std::cin, input_name);

    if (input_name.empty()) {
        std::cout << "Invalid name provided" << std::endl;
        return 1;
    }

    std::cout << "Creating a zombie on the heap..." << std::endl;
    Zombie* heapZombie = newZombie(input_name);
    heapZombie->announce();
    delete heapZombie;

    std::cout << "Creating a zombie on the stack..." << std::endl;
    randomChump(input_name);

    return 0;
}