#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap() {
	std::cout << "Default ScavTrap constructor called" << std::endl;

	this->name = "ScavTrap";
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->damage = 20;
	this->isGuard = false;

}

ScavTrap::ScavTrap(std::string _name){
	this->name = _name;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap() {
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

	if(this->isGuard == true)
	{
		std::cout << "ScavTrap is now out Gate keeper mode" << std::endl;
		this->isGuard = false;
	}
	else
	{
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
		this->isGuard = true;
	}
}