#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), energyPoint(10), hitPoint(10), damage(0){
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : name(newName), energyPoint(10), hitPoint(10), damage(0) {
    std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) : name(copy.name), energyPoint(copy.energyPoint), hitPoint(copy.hitPoint), damage(copy.damage){
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy){
    name = copy.name;
    hitPoint = copy.hitPoint;
    energyPoint = copy.energyPoint;
    damage = copy.damage;
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "Default destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    std::cout << "ClapTrap " << name << " attack " << target << ", causing " << damage << " point of damage !" << std::endl;
    energyPoint--;
    std::cout << "ClapTrap " << name << " remaining energy : " << energyPoint << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(energyPoint <= 0){
        std::cout << "ClapTrap " << name << "already dead! " << std::endl;
        return;
    }
    else if(hitPoint <= amount) {
        hitPoint = 0;
        std::cout << "ClapTrap " << name << " remaining hit point : " << hitPoint << std::endl;
        std::cout << "ClapTrap " << name << " died! " << std::endl;
    }
    else {
        std::cout << "ClapTrap " << name << " has taken " << amount << " points of damage ! " << std::endl;
        hitPoint -= amount;
        std::cout << "ClapTrap " << name << " remaining hit point : " << hitPoint << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    hitPoint += amount;
    energyPoint--;
    std::cout << "ClapTrap " << name << " has been repaired of " << amount << " hit point!" << std::endl;
	std::cout << "ClapTrap " << name << " remaining hit point : " << hitPoint << std::endl;
	std::cout << "ClapTrap " << name << " remaining energy point : " << energyPoint << std::endl;
}