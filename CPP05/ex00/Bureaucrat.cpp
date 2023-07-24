#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string Aname) : name(Aname) {
    std::cout << "Name constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copyName) : name(copyName.name) {
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucratCopy){
    const_cast<std::string&>(name) = (bureaucratCopy.name);
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Default destructor called" << std::endl;
}

const char * Bureaucrat::GradeToHighExeption::what() const throw()
{
    return("Grade is too high!\n");
}



// 1 2 3 4 ---------------------------- 148 149 150