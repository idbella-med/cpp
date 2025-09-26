#include "Harl.hpp"

void Harl::complain( std::string level ) {
    Harl harl;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Harl::*fonc[4]) (void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    int i = 0;
    while (i < 4) {
        if (levels[i] == level)
            break;
        i++;
    }

    switch (i)
    {
        case 0:
            (harl.*fonc[0])(); 
        case 1:
            (harl.*fonc[1])(); 
        case 2:
            (harl.*fonc[2])();
        case 3:
            (harl.*fonc[3])();
            break;
        default:
            Not_Harl();
            break;
    }
}

void Harl::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "That\'s Bad there is an Error here !!" << std::endl;
}

void Harl::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "No Info For Today come Back Tomorow !" << std::endl;
}

void Harl::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "Call The Dev There is Some Error's Comming !" << std::endl;
}

void Harl::error() {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "Just Forget It\'s Not Necessary !" << std::endl;
}

void Not_Harl() {
    std::cout << "[ Who Are You ? You Are Not Harl !! ]" << std::endl;
}