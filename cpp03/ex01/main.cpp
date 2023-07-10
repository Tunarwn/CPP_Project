#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap bob("ahmet");

    ScavTrap bob1("resul");
    bob.attack("RESUL");
    bob1.attack("RESUL");
    bob.takeDamage(10);
    bob.beRepaired(10);
    ScavTrap bob3("muhittin");
    bob3 = bob1;
}


/*
Ancak, miras alan sınıfın yıkıcı fonksiyonu, miras aldığı sınıfın yıkıcı fonksiyonundan önce çalışır. Bu, nesnelerin yaşam döngüsünde bir özelliği temsil eder.
Yıkıcı fonksiyonlar nesne ömrü sona erdiğinde çalışırken, yapıcı fonksiyonlar nesne oluşturulduğunda çalışır.
Dolayısıyla, ScavTrap nesnesi yok edildiğinde, önce ScavTrap'ın yıkıcı fonksiyonu çağrılır ve ardından ClapTrap'ın yıkıcı fonksiyonu çalışır.
Bu nedenle, çıktıda ClapTrap'ın yapıcı fonksiyonunun önce, ScavTrap'ın yıkıcı fonksiyonunun ise önce çalışması beklenen bir durumdur.
*/