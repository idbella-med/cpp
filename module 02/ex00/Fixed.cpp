#include "Fixed.hpp"

Fixed::Fixed() {}

Fixed::Fixed(const Fixed& other) {
    
}

Fixed::~Fixed() {}



int Fixed::getRawBits( void ) const {
    return value;
}

void Fixed::setRawBits( int const raw ) {
    value = raw;
}