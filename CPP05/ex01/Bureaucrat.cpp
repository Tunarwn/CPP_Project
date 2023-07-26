#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string Aname, int _grade) : name(Aname), grade(_grade)
{}

Bureaucrat::Bureaucrat(const Bureaucrat& copyName) : name(copyName.name) {
    // std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucratCopy){
    const_cast<std::string&>(name) = (bureaucratCopy.name);
    // std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat(){
    // std::cout << "Default destructor called" << std::endl;
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is too high!\n";
}

const char * Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too low!\n";
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat){
    os << "Bureaucrat: " << bureaucrat.getName() << "Grade: " << bureaucrat.getGrade() << std::endl;
    return os;
}

void Bureaucrat::CheckGradeRange(int grade){
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::signForm(const Form& copyForm){
    if(copyForm.getIsSigned())
        std::cout << name << " signed " << copyForm.getName() << std::endl;
    else
        std::cout << name << " couldn't sign " << copyForm.getName() << " because bureaucrat is not grade enough "<< std::endl;
}

void Bureaucrat::incrementGrade(){
    CheckGradeRange(grade);
}

void Bureaucrat::decrementGrade(){
    CheckGradeRange(grade);
}

int Bureaucrat::getGrade() const{
    return grade;
}

std::string Bureaucrat::getName() const{
    return name;
}