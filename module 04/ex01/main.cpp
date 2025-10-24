#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    std::cout << "=== Basic test from subject ===" << std::endl;
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        
        delete j; // should not create a leak
        delete i;
    }

    std::cout << "\n=== Array of Animals test ===" << std::endl;
    {
        const int size = 6;
        Animal* animals[size];
        
        for (int i = 0; i < size / 2; i++) {
            animals[i] = new Dog();
        }
        
        // Fill half with Cats
        for (int i = size / 2; i < size; i++) {
            animals[i] = new Cat();
        }
        
        std::cout << "\n--- Animals created ---" << std::endl;
        
        // Make sounds
        for (int i = 0; i < size; i++) {
            std::cout << animals[i]->getType() << " says: ";
            animals[i]->makeSound();
        }
        
        std::cout << "\n--- Deleting animals ---" << std::endl;
        
        // Delete all animals
        for (int i = 0; i < size; i++) {
            delete animals[i];
        }
    }

    std::cout << "\n=== Deep copy test for Dog ===" << std::endl;
    {
        Dog basic;
        basic.getBrain()->setIdea(0, "I love bones!");
        basic.getBrain()->setIdea(1, "Chase the cat!");
        
        std::cout << "\n--- Creating deep copy ---" << std::endl;
        Dog tmp = basic;
        
        std::cout << "\nOriginal Dog's ideas:" << std::endl;
        std::cout << "  Idea 0: " << basic.getBrain()->getIdea(0) << std::endl;
        std::cout << "  Idea 1: " << basic.getBrain()->getIdea(1) << std::endl;
        
        std::cout << "\nCopied Dog's ideas:" << std::endl;
        std::cout << "  Idea 0: " << tmp.getBrain()->getIdea(0) << std::endl;
        std::cout << "  Idea 1: " << tmp.getBrain()->getIdea(1) << std::endl;
        
        // Modify the copy
        tmp.getBrain()->setIdea(0, "Modified idea!");
        
        std::cout << "\n--- After modifying copy ---" << std::endl;
        std::cout << "Original Dog's idea 0: " << basic.getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied Dog's idea 0: " << tmp.getBrain()->getIdea(0) << std::endl;
        
        // Check if Brain addresses are different (deep copy)
        std::cout << "\nBrain addresses (should be different):" << std::endl;
        std::cout << "  Original: " << basic.getBrain() << std::endl;
        std::cout << "  Copy: " << tmp.getBrain() << std::endl;
    }

    std::cout << "\n=== Deep copy test for Cat ===" << std::endl;
    {
        Cat basic;
        basic.getBrain()->setIdea(0, "I hate dogs!");
        basic.getBrain()->setIdea(1, "Sleep all day!");
        
        std::cout << "\n--- Creating deep copy ---" << std::endl;
        Cat tmp = basic;
        
        std::cout << "\nOriginal Cat's ideas:" << std::endl;
        std::cout << "  Idea 0: " << basic.getBrain()->getIdea(0) << std::endl;
        std::cout << "  Idea 1: " << basic.getBrain()->getIdea(1) << std::endl;
        
        std::cout << "\nCopied Cat's ideas:" << std::endl;
        std::cout << "  Idea 0: " << tmp.getBrain()->getIdea(0) << std::endl;
        std::cout << "  Idea 1: " << tmp.getBrain()->getIdea(1) << std::endl;
        
        // Modify the copy
        tmp.getBrain()->setIdea(0, "Actually, dogs are okay!");
        
        std::cout << "\n--- After modifying copy ---" << std::endl;
        std::cout << "Original Cat's idea 0: " << basic.getBrain()->getIdea(0) << std::endl;
        std::cout << "Copied Cat's idea 0: " << tmp.getBrain()->getIdea(0) << std::endl;
        
        // Check if Brain addresses are different (deep copy)
        std::cout << "\nBrain addresses (should be different):" << std::endl;
        std::cout << "  Original: " << basic.getBrain() << std::endl;
        std::cout << "  Copy: " << tmp.getBrain() << std::endl;
    }

    std::cout << "\n=== Assignment operator test ===" << std::endl;
    {
        Dog dog1;
        dog1.getBrain()->setIdea(0, "First dog's idea");
        
        Dog dog2;
        dog2.getBrain()->setIdea(0, "Second dog's idea");
        
        std::cout << "\nBefore assignment:" << std::endl;
        std::cout << "  Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
        std::cout << "  Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;
        
        std::cout << "\n--- Assigning dog1 to dog2 ---" << std::endl;
        dog2 = dog1;
        
        std::cout << "\nAfter assignment:" << std::endl;
        std::cout << "  Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
        std::cout << "  Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;
        
        // Modify dog2
        dog2.getBrain()->setIdea(0, "Modified dog2");
        
        std::cout << "\nAfter modifying dog2:" << std::endl;
        std::cout << "  Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
        std::cout << "  Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;
    }

    return 0;
}