#include "Animal.hpp"

//for Animal Class

Animal::Animal() : type("Animal"){
    std::cout << MAGENTA << type << " : Default constructor called " << RESET << std::endl;
}

Animal::Animal(std::string type) : type("name"){
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

void Animal::makeSound(void) const{
    std::cout << type << " : I am making sound. " << RESET << std::endl;
}

std::string Animal::getType(void) const{
    return this->type;
}

// for dog class

Dog::Dog() : Animal(){
    Dog::type = "Dog";
    std::cout << CYAN << type << " : Default constructor called " << RESET << std::endl;
}

Dog::Dog(const Dog& copyDog) : Animal(){
    Animal::type = copyDog.type;
    std::cout << CYAN << type << " : Default copy contructor called " << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& copyDog){
    Animal::operator=(copyDog);
    std::cout << CYAN << type << " : copy assignment operator called" << RESET << std::endl;
    return *this;
}

Dog::~Dog(){
    std::cout << RED << "Dog : destructor called " << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << CYAN << type << " : Hav Hav " << RESET << std::endl;
}

//for Cat class

Cat::Cat() : Animal(){
    Cat::type = "Cat";
    std::cout << GREEN << type << " : Default constructor called " << std::endl;
}

Cat::Cat(const Cat& copyCat) : Animal(){
    Animal::type = copyCat.type;
    std::cout << GREEN << type << " : Default copy constructor called " << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& copyCat) {
    Animal::operator=(copyCat);
    std::cout << GREEN << type << " : Default copy assignment operator called " << RESET << std::endl;
    return *this;
}

Cat::~Cat(){
    std::cout << RED << type << " : Deafult destructor called " << std::endl;
}

void Cat::makeSound(void) const{
    std::cout << GREEN << type << " : Meow Meow" << RESET << std::endl;
}