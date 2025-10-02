#include "FragTrap.hpp"

int main() {
    ClapTrap c1("BasicBot");
    c1.attack("dummy");
    c1.takeDamage(5);
    c1.beRepaired(2);

    std::cout << "--------------------------\n";

    ScavTrap s1("Guardian");
    s1.attack("enemy");
    s1.takeDamage(30);
    s1.beRepaired(10);
    s1.guardGate();

    std::cout << "--------------------------\n";

    FragTrap f1("test");
    f1.attack("test");
    f1.takeDamage(30);
    f1.beRepaired(10);
    f1.guardGate();
    f1.highFivesGuys();

    return 0;
}
