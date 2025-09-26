#include "Fixed.hpp"

const int Fixed::bits = 0;

Fixed::Fixed() : value(10) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->value = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits( void ) const {
    return value;
}

void Fixed::setRawBits( int const raw ) {
    value = raw;
}