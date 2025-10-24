#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): NAME("?"), HitPoints(10),
        EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap " << NAME << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(std::string NAME) : NAME(NAME), HitPoints(10),
        EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap " << NAME << " constructed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (EnergyPoints == 0) {
        std::cout << "out of Energy point" << std::endl;
        return ;
    }
    if (HitPoints == 0) {
        std::cout << NAME << " already died" << std::endl;
        return ;
    }
    EnergyPoints--;
    std::cout << "ClapTrap " << NAME << " attacks "
            << target << " causing " << AttackDamage
            << " points of damage!" << " (EP left is: " << EnergyPoints << ")" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount > HitPoints)
        HitPoints = 0;
    else
        HitPoints -= amount;
    std::cout << "ClapTrap " << NAME << " takes " << amount
            << " points of damage! (HP left is: " << HitPoints << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (EnergyPoints == 0) {
        std::cout << "ClapTrap " << NAME << " out of Energy point" << std::endl;
        return ;
    }
    if (HitPoints == 0) {
        std::cout << "ClapTrap " << NAME << " already died" << std::endl;
        return ;
    }
    EnergyPoints--;
    HitPoints += amount;
    std::cout << "ClapTrap " << NAME << " repairs itself, recovering "
            << amount << " (HP is: " << HitPoints << ")"
            << " (EP left is: " << EnergyPoints << ")" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clap) {
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = clap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->NAME = clap.NAME;
    this->HitPoints = clap.HitPoints;
    this->EnergyPoints = clap.EnergyPoints;
    this->AttackDamage = clap.AttackDamage;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << NAME << " destructed!" << std::endl;
}