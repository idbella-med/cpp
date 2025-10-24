#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal Default constructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal Sound!" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

Animal::Animal(const Animal& animal) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal; // check it
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal copy assignment constructor called" << std::endl;
    type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal Destructor called" << std::endl;
}