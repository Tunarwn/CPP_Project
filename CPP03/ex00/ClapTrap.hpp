# ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

private:
    std::string name;
    unsigned int energyPoint;
    unsigned int hitPoint;
    unsigned int damage;
public:
    ClapTrap();
    ClapTrap(std::string newName);
    ClapTrap(const ClapTrap& copy);
    ClapTrap& operator=(const ClapTrap& copy);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif