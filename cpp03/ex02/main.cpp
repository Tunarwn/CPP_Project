#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap bob("ahmet");

    FragTrap bob1("resul");
    bob.attack("RESUL");
    bob1.attack("RESUL");
    bob.takeDamage(10);
    bob.beRepaired(10);
    bob1.highFivesGuys();
}


/*
Ancak, miras alan sınıfın yıkıcı fonksiyonu, miras aldığı sınıfın yıkıcı fonksiyonundan önce çalışır. Bu, nesnelerin yaşam döngüsünde bir özelliği temsil eder.
Yıkıcı fonksiyonlar nesne ömrü sona erdiğinde çalışırken, yapıcı fonksiyonlar nesne oluşturulduğunda çalışır.
Dolayısıyla, FragTrap nesnesi yok edildiğinde, önce FragTrap'ın yıkıcı fonksiyonu çağrılır ve ardından ClapTrap'ın yıkıcı fonksiyonu çalışır.
Bu nedenle, çıktıda ClapTrap'ın yapıcı fonksiyonunun önce, FragTrap'ın yıkıcı fonksiyonunun ise önce çalışması beklenen bir durumdur.
*/