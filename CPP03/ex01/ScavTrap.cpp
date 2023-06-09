#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name) {
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy.name) {
	*this = copy;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& copy){
	
	this->name = copy.name;
	this->hitPoint = copy.hitPoint;
	this->energyPoint = copy.energyPoint;
	this->damage = copy.damage;
	this->isGuard = copy.isGuard;

	return *this;
}
ScavTrap::~ScavTrap(){

	std::cout << "ScavTrap destructor called" << std::endl;
}


void ScavTrap::guardGate(){

		std::cout << "ScavTrap is now out Gate keeper mode" << std::endl;
}