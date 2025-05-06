#include "Dog.hpp"
#include "Cat.hpp"

int main()
{    
    Cat originalCat;
    originalCat.getBrain()->ideas[0] = "Je veux du poisson";
    originalCat.getBrain()->ideas[1] = "Je veux dormir";
    
    Cat copyCat = originalCat;
    
    std::cout << "\nAvant modification:" << std::endl;
    std::cout << "Original idea[0]: " << originalCat.getBrain()->ideas[0] << std::endl;
    std::cout << "Copy idea[0]: " << copyCat.getBrain()->ideas[0] << std::endl;
    
    copyCat.getBrain()->ideas[0] = "Je veux des croquettes";
    
    std::cout << "\nAprès modification de la copie:" << std::endl;
    std::cout << "Original idea[0]: " << originalCat.getBrain()->ideas[0] << std::endl;
    std::cout << "Copy idea[0]: " << copyCat.getBrain()->ideas[0] << std::endl;


    return 0;
}
