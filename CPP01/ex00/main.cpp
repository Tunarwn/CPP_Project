#include <iostream>
#include "Zombie.hpp"

int main(){
	Zombie* myZombie = newZombie("Foo");
	myZombie->announce();
	randomChump("tuna");
	delete myZombie;
	return 0;
}
