#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(std::string name);
    ScavTrap (const ScavTrap &res);
    ScavTrap& operator=(const ScavTrap &res);
    ~ScavTrap();
    void guardGate();
};


#endif