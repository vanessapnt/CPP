#include <iostream>

//ref : constant pointer (always points to the same thing), always dereferenced and never null (must be initialized when created).

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string* stringPTR = &var;
    std::string& stringREF = var;

    std::cout << "Memory address of the string variable : " << &var << std::endl;
    std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;

    std::cout << "Value of the string variable : " << var << std::endl;
    std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;

    return 0;
}
