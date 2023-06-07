#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(3, "tuna");

	delete[] horde;
}
