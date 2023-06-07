#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

void randomChump(std::string name){
	Zombie Zombie(name);
	Zombie.announce();
}
