#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wcat) {
    *this = wcat;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    WrongAnimal::operator=(other);
    std::cout << "WrongCat copy assignment constructor called" << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructor called" << std::endl;
}