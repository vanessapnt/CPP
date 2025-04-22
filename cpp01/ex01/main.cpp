#include "Zombie.hpp"

int main() {
    int hordeSize = 0;
    std::string zombieName;

    std::cout << "Enter number of zombies: ";
    std::cin >> hordeSize;
//operator>> behavior:
//By default, skips leading whitespace (including newlines from Enter presses)
//Waits indefinitely for valid numerical input
    if (hordeSize <= 0)
    {
        std::cout << "Invalid size provided" << std::endl;
        return 1;
    }
    std::cin.ignore(); 

//After reading hordeSize with std::cin, a newline character (\n) remains in the input buffer. This can interfere with the next std::getline, causing it to read an empty string. The std::cin.ignore() clears the buffer.
    std::cout << "Enter zombie name: ";
    std::getline(std::cin, zombieName);

    if (zombieName.empty())
    {
        std::cout << "Invalid name provided" << std::endl;
        return 1;
    }
    Zombie* horde = zombieHorde(hordeSize, zombieName);

    int i = 0;
    while (i < hordeSize)
        horde[i++].announce();

    delete[] horde;

    return 0;
}