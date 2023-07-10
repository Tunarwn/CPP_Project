#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string _name;//claptrap name.
    int HitPoints;//claptrap canı.
    int EnergyPoints;//claptrap energy points her saldırıdan sonra 1 azalır.
    int AttackDamage;//claptrap gücünü temsil eder attack fonkisyonu çalıştığında AttackDamage kadar hasar verir.
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap (const ClapTrap &res);
	ClapTrap& operator=(const ClapTrap &res);
    void attack(const std::string& target);//claptrap'ın saldırı fonkisyonu.
    void takeDamage(unsigned int amount);//claptrapın'ın hasar yediği fonkisyon.
    void beRepaired(unsigned int amount);
};

#endif