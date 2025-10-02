#include "Animal.hpp"

Animal::Animal() : type("A"){}

Animal::~Animal() {}

void Animal::makeSound() {
    if (type == "Dog")
        std::cout << "woof woof!" << std::endl;
    else if (type == "Cat")
        std::cout << "meow meow!" << std::endl;
    else 
        std::cout << "no type" << std::endl;
}

std::string Animal::getType()
{
    return (type);
}