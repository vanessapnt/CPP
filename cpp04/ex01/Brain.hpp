#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public :
        std::string ideas[100];

        Brain();
        Brain(const std::string &name);
        Brain(const Brain &other);
        Brain &operator=(const Brain& other);
        ~Brain();
        std::string getIdea(int index) const;
};

#endif