#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string NAME;

    public:
        DiamondTrap();
        DiamondTrap(std::string NAME);
        DiamondTrap(const DiamondTrap& diamond);
        ~DiamondTrap();

        DiamondTrap& operator=(const DiamondTrap& diamond);

        void whoAmI();
};

#endif