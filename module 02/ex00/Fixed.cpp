#include "Fixed.hpp"

Fixed::Fixed() {}

Fixed::Fixed(const Fixed& other) {}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        this->value = other.value;
    }
    return *this;
}

int Fixed::getRawBits( void ) const {
    return value;
}

void Fixed::setRawBits( int const raw ) {
    value = raw;
}