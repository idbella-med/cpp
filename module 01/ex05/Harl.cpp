#include "Harl.hpp" 

void Harl::debug( void ) {
    std::cout << "DEBUG : this is debug message" << std::endl;
}

void Harl::info( void ) {
    std::cout << "INFO : this is info message" << std::endl;
}

void Harl::warning( void ) {
    std::cout << "WARNING : this is warning message" << std::endl;
}

void Harl::error( void ) {
    std::cout << "ERROR : this is error message" << std::endl;
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
            std::cout << "NOTHING : there is no comments like this" << std::endl;
            break;
        }
    }
}