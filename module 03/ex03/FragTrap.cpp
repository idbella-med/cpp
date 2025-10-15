#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("?") {
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FrapTrap " << NAME << " constructed (Default)!" << std::endl;
}

FragTrap::FragTrap(std::string _Name): ClapTrap(_Name)
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FrapTrap " << NAME << " constructed!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap: " << NAME << " high five guys" << std::endl;
}

FragTrap::FragTrap(const FragTrap& frag) {
    std::cout << "FragTrap Copy constructor called" << std::endl;
    *this = frag;
}

FragTrap& FragTrap::operator=(const FragTrap& frag) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    ClapTrap::operator=(frag);
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FrapTrap " << NAME << " destructed!" << std::endl;
}