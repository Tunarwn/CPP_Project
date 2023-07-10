#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)//constructor
{
    this->_name = name;
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->AttackDamage = 20;// saldırı gücünü sıfır yapıyoruz.
    this->EnergyPoints = 50;//enerjisini 10 yapıyoruz.
    this->HitPoints = 100;//canını 10 yapıyoruz.
}
/*ClapTrap::ClapTrap(){
    std::cout << "ClapTrap default constructor called" << std::endl;
}*/
ClapTrap::~ClapTrap()//destructor
{
    std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &res) : _name(res._name), HitPoints(res.HitPoints), EnergyPoints(res.EnergyPoints), AttackDamage(res.AttackDamage)
{
    std::cout << "ClapTrap copy constructor called! "<< std::endl; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap &res)
{
    _name = res._name;
    EnergyPoints = res.EnergyPoints;
    HitPoints = res.HitPoints;
    AttackDamage = res.AttackDamage;
    std::cout << "ClapTrap copy assigment operator called! " << std::endl;
    return (*this);
}

void ClapTrap::attack(const std::string& target)//attack fonkisyonu çağırıldığında clapttrap class'ı mainden gelen target nesnesine hasar verir.
{
    if (this->HitPoints < 1 || this->EnergyPoints < 1)//eğer ki claptrap'ın hit points(sağlığı) ve energy points(enerjisi) 0 ise saldırı yapamayacağı için koşul ekliyoruz.
        std::cout << "failed to attack" << std::endl;
    else//eğer hit points ve energy points sıfır değil ise clap trap nesnesi gelen target nesnesine this->AttackDamage kadar hasar verir.
    {
        std::cout << this->_name << " attacks " << target << " causing " << this->AttackDamage << " points of damage! " << std::endl;
    }
    this->EnergyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)//claptrap nesnesine gelen saldırıları yönlendiren fonksiyon.
{
    if (this->HitPoints == 0)//claptrap nesnesinin hit points(canı) halihazırda 0 ise ölmüş demektir o yüzden hasar alamaz.
        std::cout << this->_name << "already dead can't take damage!" << std::endl;
    else//eğer hit pointsin sıfır olma durumu yok ise buraya giri gelen amount değeri kadar hit pointten azaltıyoruz.
    {
        std::cout << this->_name << "take " << amount << " points of damage! " << std::endl;
        this->HitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)//claptrap'ın gelen amount kadar hit points ( canını ) arttıran fonkisyon.
{
    if (this->HitPoints == 0)// eğer claptrap'ın canı 0 ise ölmüş demektir can ekleyemeyiz.
        std::cout << this->_name << "already dead can't be repaired!" << std::endl;
    else//eğer hit points değeri sıfır değilse hp'yi yenileyeceğimiz fonkisyon.
    {
        std::cout << this->_name << "health increased by " << amount << std::endl;
        this->HitPoints += amount; // hp'yi amount kadar arttırdık.
    }
}

/*
1 attack fonksiyonu:

*Saldıran ClapTrap nesnesi, belirli bir hedefe saldırmak için bu fonksiyonu kullanır.
*Fonksiyona bir std::string parametresi olarak hedefin adı geçirilir.
*Eğer ClapTrap'in hit points veya energy points değeri 0 ise, saldırı yapılamaz ve buna dair bir mesaj yazdırılır.
*Aksi halde, ClapTrap'in saldırı hasarı (attackDamage) hedefin hit points'ından düşer.
*Enerji puanı (energy points) 1 azaltılır.
*Saldırı gerçekleştiğinde, ClapTrap'in adı, hedefin adı ve hasar miktarı ile ilgili bir mesaj yazdırılır.

2 takeDamage fonksiyonu:

*ClapTrap nesnesi, kendisine verilen bir hasar miktarıyla bu fonksiyonu kullanarak hasar alır.
*Fonksiyona bir unsigned int parametresi olarak hasar miktarı geçirilir.
*Eğer ClapTrap'in hit points değeri zaten 0 ise, hiçbir şey yapılmaz ve buna dair bir mesaj yazdırılır.
*Aksi halde, ClapTrap'in hit points değeri hasar miktarı kadar azaltılır.
*Eğer ClapTrap'in hit points değeri 0 ise, buna dair bir mesaj yazdırılır.

3 beRepaired fonksiyonu:

*ClapTrap nesnesi, kendisine verilen bir miktarla bu fonksiyonu kullanarak tamir olur.
*Fonksiyona bir unsigned int parametresi olarak tamir miktarı geçirilir.
*Eğer ClapTrap'in hit points değeri zaten 0 ise, tamir yapılamaz ve buna dair bir mesaj yazdırılır.
*Aksi halde, ClapTrap'in hit points değeri tamir miktarı kadar artırılır.
*Tamir gerçekleştiğinde, tamir miktarı ile ilgili bir mesaj yazdırılır. 
*/