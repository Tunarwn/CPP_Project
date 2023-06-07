#include "Contact.hpp"
#include "Phonebook.hpp"
#include <string.h>
#include <iomanip>

int main()
{
    PhoneBook p;

    p.sayac = 0;
    std::string input;
    std::string temp    ;
	int c = 0;
	static int a_counter = 0;
    do
    {
        std::cout << "\033[0;36m\033[1mADD, SEARCH, EXIT -->\033[0m";
        std::getline(std::cin, input);
        if(!input.compare("ADD"))
        {
            while(42)
            {
                std::cout << "Enter Name ==>";
                std::getline(std::cin, temp);
                p.people[p.sayac].set_name(temp);
                std::cout << "Enter Surname ==>";
                std::getline(std::cin, temp);
                p.people[p.sayac].set_surname(temp);
                std::cout << "Enter Nick Name ==>";
                std::getline(std::cin, temp);
                p.people[p.sayac].set_nickname(temp);
                std::cout << "Enter Telephone Number ==>";
                std::getline(std::cin, temp);
                p.people[p.sayac].set_number(temp);
                std::cout << "Enter Secret ==>";
                std::getline(std::cin, temp);
                p.people[p.sayac].set_secret(temp);
                c++;
                if(p.people[p.sayac].get_name().empty())
                {
                    std::cout << "\033[0;31m\033[1mAll fields must be filled out\033[0m" << std::endl;
                }
                else
                {
                    p.sayac++;
                    break;
                }
            }
			a_counter++;
            if(p.sayac == 8)
                p.sayac = 0;
        }
        else if(!input.compare("SEARCH"))
        {
            std::string id;
            int k;
            int i = 1;

            std::cout << "\033[0;35m\033[1m         <>----SEARCH----<>\033[0m" << std::endl;
            while(i <= c)
            {
                std::cout << std::setw(1) << i;
                std::cout << std::right << std::setw(10) << (p.people[i - 1].get_name().size() > 10 ? p.people[i - 1].get_name().substr(0,9) + "." : p.people[i - 1].get_name()) << "|";
                std::cout << std::right << std::setw(10) << (p.people[i - 1].get_surname().size() > 10 ? p.people[i - 1].get_surname().substr(0,9) + "." : p.people[i - 1].get_surname()) << "|";
                std::cout << std::right << std::setw(10) << (p.people[i - 1].get_nickname().size() > 10 ? p.people[i - 1].get_nickname().substr(0,9) + "." : p.people[i - 1].get_nickname()) << std::endl;
                i++;
            }
            while (42)
            {
                std::cout << "Dizin numarası ==>";
                std::getline(std::cin, id);
                k = atoi(id.c_str());
                if(k > a_counter || k < 1)
                    std::cout << "Wrong Index" << std::endl;
                else
                {
					std::cout << "NAME ->" << p.people[k - 1].get_name() << std::endl;
                    std::cout << "SURNAME ->"<< p.people[k - 1].get_surname() << std::endl;
                    std::cout << "NICKNAME ->"<< p.people[k - 1].get_nickname() << std::endl;
                    std::cout << "NUMBER ->"<<p.people[k - 1].get_number() << std::endl;
                    std::cout << "SECRET ->" << p.people[k - 1].get_secret() << std::endl;
                    break;
                }
            }
        }
        else if(input.compare("EXIT"))
        {
            std::cout << "\033[0;33m\033[1m<----->Lütfen Geçerli Bir Komut Girin<----->\033[0m" << std::endl;
        }
    }while(input.compare("EXIT"));
    std::cout << "\033[0;31m\033[1m<----->ÇIKIŞ BAŞARILI<----->\033[0m" << std::endl;
}
