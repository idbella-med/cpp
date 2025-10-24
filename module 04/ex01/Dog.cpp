#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

void Dog::makeSound() const {
    std::cout << "Dog Sound: bark!" << std::endl;
}

Dog::Dog(const Dog& dog) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog; // check it
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog copy assignment constructor called" << std::endl;
    Animal::operator=(other);
    delete brain;
    brain = new Brain(*other.brain);
    return *this;
}

Brain* Dog::getBrain() const {
    return this->brain;
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
    delete brain;
}