#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << Name << " attacks "
            << target << ", causing " << AttackDamage
            << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    HitPoints -= amount;
    std::cout << "ClapTrap " << Name << " takes " << amount
            << " points of damage! (HP left: " << HitPoints << ")" << std::endl;;
}

void ClapTrap::beRepaired(unsigned int amount) {
    EnergyPoints--;
    HitPoints += amount;
    std::cout << "ClapTrap " << Name << " repairs itself, recovering "
            << amount << " hit points! (HP: " << HitPoints << ")"<< std::endl;;
}

ClapTrap::ClapTrap(std::string _Name) : Name(_Name),
    HitPoints(10), EnergyPoints(10), AttackDamage(0) {
    std::cout << "ClapTrap " << Name << " constructed!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << Name << " destructed!" << std::endl;
}