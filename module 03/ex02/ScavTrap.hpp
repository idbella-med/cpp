#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string NAME);
        ScavTrap(const ScavTrap& clap);
        ~ScavTrap();

        ScavTrap& operator=(const ScavTrap& clap);

        void attack(const std::string& target);
        void guardGate();
};


#endif