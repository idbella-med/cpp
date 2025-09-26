#include "Harl.hpp"

int main(int ac, char **av) {
    Harl harl;
    if (ac != 2)
        Not_Harl();
    else {
        harl.complain(av[1]);
    }
}