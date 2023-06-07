#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string name;
    std::string surname;
    std::string nickname;
    std::string number;
    std::string secret;
public:
    void set_name(std::string name){this->name = name;}
    std::string get_name(void){return(this->name);}
    void set_surname(std::string surname){this->surname = surname;}
    std::string get_surname(void){return(this->surname);}
    void set_nickname(std::string nickname){this->nickname = nickname;}
    std::string get_nickname(void){return(this->nickname);}
    void set_number(std::string number){this->number = number;}
    std::string get_number(void){return(this->number);}
    void set_secret(std::string secret){this->secret = secret;}
    std::string get_secret(void){return(this->secret);}
};

#endif
