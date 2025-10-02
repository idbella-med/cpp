#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _Name) : ClapTrap(_Name) {
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 100;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode!\n";
}

