#include "Harl.hpp" 

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

void Harl::complain( std::string level ) {
    Harl harl;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Harl::*fonc[4]) (void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (harl.*fonc[i])();
            break;
        }
        else if (i == 3)
        {
            std::cout << "NOTHING : you are not Harl who are you ?" << std::endl;
            break;
        }
    }
}