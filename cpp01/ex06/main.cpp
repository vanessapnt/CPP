#include "Harl.hpp"

int main()
{
    Harl harl;
    //harl.complain_filter("DEBUG");
    //harl.complain_filter("INFO");
    //harl.complain_filter("WARNING");
    //harl.complain_filter("ERROR");
    
    harl.complain_filter("INVALID LEVEL");
    //harl.complain_filter("debug");

    return 0;
}
