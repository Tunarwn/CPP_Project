#include "ClapTrap.hpp"
#include "FragTrap.hpp"

void FragTrap::highFivesGuys()//FragTrap'ın özel bildirimi.
{
    std::cout << "FragTrap is now in High Five Guys!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::~FragTrap()//destructor
{
    std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap::FragTrap (const FragTrap &res) : ClapTrap(res)
{
    std::cout << "FragTrap copy constructor called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &res)
{
    ClapTrap::operator=(res);
    std::cout << "copy assigment operator called!" << std::endl;
    return (*this);
}