#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _Name): ScavTrap(_Name)
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "high five guys" << std::endl;
}