#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& newName) {
    this->name = newName;
}

void HumanB::setWeapon(Weapon& newWeapon) {
    weapon = &newWeapon;
}

void HumanB::attack() const {
    if(weapon != NULL)
        std::cout << name << " attack with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " is unarmed and cannot attack ! " << std::endl;
}

HumanB::~HumanB() {
    std::cout << name << " has been defeated" << std::endl;
}
