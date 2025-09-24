#include "SedForLosers.hpp"

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cout << "usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    SedForLosers sed(av[1], av[2], av[3]);

    if (!sed.validate())
        return 1;

    sed.replace();
}