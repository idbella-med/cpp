#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat Default constructor called" << std::endl;
    type = "Cat";
    brain = new Brain();
}

void Cat::makeSound() const {
    std::cout << "Cat Sound: moew!" << std::endl;
}

Cat::Cat(const Cat& cat) {
    *this = cat; // check it
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    Animal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain); // check why other.brain not work
    std::cout << "Cat copy assignment constructor called" << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
}
