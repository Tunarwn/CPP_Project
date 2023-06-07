#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &newName, Weapon& newWeapon) : weapon(newWeapon){
    this->name = newName;
}

void HumanA::attack() {
    std::cout << name << " attack with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {
    std::cout << name << " has been defeated" << std::endl;
}
