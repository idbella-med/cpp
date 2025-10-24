#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("?") {
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap " << NAME << " constructed (Default)!" << std::endl;
}

ScavTrap::ScavTrap(std::string NAME) : ClapTrap(NAME) {
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScavTrap " << NAME << " constructed!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << NAME << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (EnergyPoints == 0) {
        std::cout << "out of Energy point" << std::endl;
        return ;
    }
    if (HitPoints == 0) {
        std::cout << NAME << " already died" << std::endl;
        return ;
    }
    EnergyPoints--;
    std::cout << "ScavTrap " << NAME << " attacks "
            << target << " causing " << AttackDamage
            << " points of damage!" << " (EP left is: " << EnergyPoints << ")" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scav) {
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    *this = scav;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    ClapTrap::operator=(scav);
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << NAME << " destructed!" << std::endl;
}