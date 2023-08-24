#include "ClapTrap.hpp"

int main() {
    ClapTrap tuna("Tuna");
    ClapTrap emre(tuna);



    tuna.attack("Enemy");
    emre.takeDamage(5);
    emre.beRepaired(3);
    emre.attack("Player");
    tuna.takeDamage(7);

    return 0;
}
