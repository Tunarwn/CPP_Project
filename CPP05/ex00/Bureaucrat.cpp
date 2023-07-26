#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string Aname) : name(Aname) {
    std::cout << "Name constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string Aname, int _grade) : name(Aname), grade(_grade){}

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

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return ("Grade is too high!\n");
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade is too low!\n");
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat){
    os << "Bureaucrat: " << bureaucrat.getName() << "Grade: " << bureaucrat.getGrade() << std::endl;
    return os;
}

void Bureaucrat::incrementGrade(){
    if(grade - 1 < 1)
        throw GradeTooHighException();
    else if(grade - 1 > 150)
        throw GradeTooLowException();
    grade--;
}

void Bureaucrat::decrementGrade(){
    if(grade + 1 < 1)
        throw GradeTooHighException();
    else if(grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}
