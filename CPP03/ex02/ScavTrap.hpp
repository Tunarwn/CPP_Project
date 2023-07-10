#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap{

	private:
		bool isGuard;

	public:

		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap& copy);
		ScavTrap& operator=(const ScavTrap& copy);	
		~ScavTrap();
	
		void guardGate();

};

#endif