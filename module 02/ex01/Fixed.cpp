#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
    std::cout << "Int constructor called" << std::endl;
    value = num << bits;
}

Fixed::Fixed(const float num) {
    std::cout << "Float constructor called" << std::endl;
    value = roundf(num * (1 << bits));
}

Fixed:: Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->value = other.getRawBits();
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

int Fixed::getRawBits( void ) const {
    return value;
}

void Fixed::setRawBits( int const raw ) {
    value = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const {
    return ((float)value / (float)(1 << bits));
}

int Fixed::toInt(void) const {
    return (value << bits);
}