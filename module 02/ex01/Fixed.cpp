#include "Fixed.hpp"

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int number) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float num) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed:: Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
}