#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

/*
void (Harl::*funcTab[])() 
    void: The function returns nothing.
    Harl::*: This is a pointer to a member function of the Harl class.
    funcTab[]: This is an array of pointers to member functions.
    (): The functions do not take any arguments.
*/
void Harl::complain( std::string level)
{
    std::string cmds[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*funcTab[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    
    int i = 0;
    while (i < 4)
    {
        if (level == cmds[i])
        {
            (this->*funcTab[i])();
            return;
        }
        i++;
    }
    std::cerr << "Invalid Command: " << level << std::endl;
}