#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "Default FragTrap constructor called" << std::endl;

    this->name = "FragTrap";
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy){
}

FragTrap& FragTrap::operator=(const FragTrap& copy){
    ClapTrap::operator=(copy);
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFiveGuys(void){
    std::cout << " high fives " << std::endl;
}