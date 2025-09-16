#include <iostream>

int main(int ac, char *av[])
{
    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else {
        for (int i = 1; av[i]; i++) {
            std::string str(av[i]);
            for (int j = 0; j < (int)str.size(); j++) {
                std::cout << (char)std::toupper(str[j]);
            }
        }
    }
    std::cout << std::endl;
    return (0);
}