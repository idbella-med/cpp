#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& brain) {
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = brain.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
    return *this;
}

void Brain::setIdea(int index, const std::string& idea) {
    if (index >= 0 && index < 100) {
        this->ideas[index] = idea;
    }
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return this->ideas[index];
    }
    return "";
}

Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}