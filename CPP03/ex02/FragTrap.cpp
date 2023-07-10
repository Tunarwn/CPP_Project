#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "Default FragTrap constructor called" << std::endl;

    this->name = "FragTrap";
    this->hitPoint = 100;
    this->energyPoint = 100;
    this->damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy){
    *this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& copy){
    this->name = copy.name;
    this->hitPoint = copy.hitPoint;
    this->energyPoint = copy.energyPoint;
    this->damage = copy.damage;

    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFiveGuys(void){
    std::cout << " high fives " << std::endl;
}