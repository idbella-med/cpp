#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("?_clap_name"), ScavTrap("?"), FragTrap("?")
{
    this->NAME = "?";
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;

    std::cout << "DiamondTrap " << NAME << " constructed (Default)!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string NAME) : ClapTrap(NAME + "_clap_name"), ScavTrap(NAME), FragTrap(NAME)
{
    this->NAME = NAME;
    this->HitPoints = FragTrap::HitPoints;
    this->EnergyPoints = ScavTrap::EnergyPoints;
    this->AttackDamage = FragTrap::AttackDamage;

    std::cout << "DiamondTrap " << NAME << " constructed!" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamonTrap: i am " << NAME
        << " and my ClapTrap Name is " << ClapTrap::NAME
        << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamond) {
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = diamond;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamond) {
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    ClapTrap::operator=(diamond);
    this->NAME = diamond.NAME;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << NAME << " destructed!" << std::endl;
}