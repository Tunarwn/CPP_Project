#include "Animal.hpp"

//for Animal Classes

Animal::Animal() : type("Animal"){
    std::cout << MAGENTA << type << " : Default constructor called " << RESET << std::endl;
}

Animal::Animal(std::string a_type) : type("name"){
    std::cout << MAGENTA << type << " : Default name constructor called "<< RESET << std::endl;
}

Animal::Animal(const Animal& copyType) : type(copyType.type){
    std::cout << MAGENTA << type << " : Default copy constructor called " << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& copyType){
    this->type = copyType.getType();
    std::cout << MAGENTA << type << " : Default copy assignment operator called " << RESET << std::endl;
    return *this;
}

Animal::~Animal(){
    std::cout << RED << "Animal : Destructor called" << RESET << std::endl;
}

std::string Animal::getType(void) const{
    return this->type;
}