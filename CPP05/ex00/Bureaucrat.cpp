#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string Aname) {
    Aname = name;
    std::cout << "Name constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copyName) : name(copyName.name) {
    std::cout << "Copy assignment constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copyName){
    name = copyName.getName();

}