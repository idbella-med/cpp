#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string _Name);
        FragTrap(const FragTrap& frag);
        ~FragTrap();

        FragTrap& operator=(const FragTrap& frag);

        void highFivesGuys(void);
};


#endif