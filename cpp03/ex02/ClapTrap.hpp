#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected: // bir önceki fonsksiyonda private olan bu değerler protected oldu çünkü miras aldığımız fonkisyonda bu değerleri kullanmamız gerekiyor.
    std::string _name;//claptrap name.
    int HitPoints;//claptrap canı.
    int EnergyPoints;//claptrap energy points her saldırıdan sonra 1 azalır.
    int AttackDamage;//claptrap gücünü temsil eder attack fonkisyonu çalıştığında AttackDamage kadar hasar verir.
public:

    //ClapTrap();
    ClapTrap(std::string name);
    ClapTrap (const ClapTrap &res);
	ClapTrap& operator=(const ClapTrap &res);
    ~ClapTrap();
    void attack(const std::string& target);//claptrap'ın saldırı fonkisyonu.
    void takeDamage(unsigned int amount);//claptrapın'ın hasar yediği fonkisyon.
    void beRepaired(unsigned int amount);//claptrap'ın canının yenilendiği fonkisyon.
};

#endif

