#ifndef CAT_HPP
#define CAt_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain *brain;

    public:
        Cat();
        Cat(const Cat& cat);
        Cat& operator=(const Cat& other);
        ~Cat();

        void makeSound() const;
        Brain* getBrain() const;
};

#endif