#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string NAME;
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        unsigned int AttackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string NAME);
        ClapTrap(const ClapTrap& clap);
        ~ClapTrap();

        ClapTrap& operator=(const ClapTrap& clap);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif