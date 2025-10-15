#include "ClapTrap.hpp"

int main() {
    ClapTrap cp("Hero");
    cp.attack("enemy");
    cp.takeDamage(2);
    cp.beRepaired(10);
    std::cout << "--------------------------\n";
}