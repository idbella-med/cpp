#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "---------------------\n";

    delete i;
    delete j;
    delete meta;

    std::cout << "---------------------\n";

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    wrongCat->makeSound();
    wrongMeta->makeSound();
    
    std::cout << "---------------------\n";

    delete wrongCat;
    delete wrongMeta;

    return 0;
}