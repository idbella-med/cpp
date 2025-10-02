#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        void makeSound(void);
        std::string getType(void);
        Animal();
        ~Animal();
};




#endif