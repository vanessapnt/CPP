#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public :
        Harl();
        ~Harl();
        void complain_filter( std::string level );
};


#endif