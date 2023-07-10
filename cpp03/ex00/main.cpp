#include "ClapTrap.hpp"

int main()
{
    ClapTrap bob("emre");
    bob.attack("RESUL");
    bob.takeDamage(5);
    bob.beRepaired(10);
    ClapTrap bob1(bob);
    bob1.attack("resul");
    ClapTrap bob2("ahmet");
    bob2.attack("RESUL");
    bob2 = bob;
    bob2.attack("RESUL");
}