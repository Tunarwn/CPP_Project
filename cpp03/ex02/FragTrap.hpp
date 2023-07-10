#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name);
    FragTrap (const FragTrap &res);
    FragTrap& operator=(const FragTrap &res);
    ~FragTrap();
    void highFivesGuys(void);
};


#endif