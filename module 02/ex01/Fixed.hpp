#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    private :
        const int value;
        static const int bits;

    public :
        Fixed();
        Fixed(int number);
        Fixed(float num);
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
};

#endif