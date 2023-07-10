#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void ScavTrap::guardGate()//scavtrap'ın özel bildirimi.
{
    std::cout << "ScavTrap is now in Gate Keeper mode!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::~ScavTrap()//destructor
{
    std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap &res) : ClapTrap(res)
{
    std::cout << "ScavTrap copy constructor called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &res)
{
    ClapTrap::operator=(res);
    std::cout << "copy assigment operator called!" << std::endl;
    return (*this);
}