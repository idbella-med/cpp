#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal") {
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal Sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wanimal) {
    *this = wanimal;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    type = other.type; 
    std::cout << "WrongAnimal copy assignment constructor called" << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructor called" << std::endl;
}