#include "Harl.hpp"

int main()
{
    Harl harl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    
    harl.complain("INVALID LEVEL");
    harl.complain("debug");

    return 0;
}