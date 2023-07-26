#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string Aname, int _grade) : name(Aname)
{
    if(_grade < 1)
        throw GradeTooHighException();
    else if(_grade > 150)
        throw GradeTooLowException();
    else
        grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copyName) : name(copyName.name){
    // std::cout << "Copy constructor called" << std::endl;
    if(copyName.grade < 1)
        throw GradeTooHighException();
    else if(copyName.grade > 150)
        throw GradeTooLowException();
    else
        grade = copyName.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucratCopy){
    const_cast<std::string&>(name) = (bureaucratCopy.name);
    if(bureaucratCopy.grade < 1)
        throw GradeTooHighException();
    else if(bureaucratCopy.grade > 150)
        throw GradeTooLowException();
    else
        grade = bureaucratCopy.grade;
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

void Bureaucrat::signForm(const AForm& copyForm){
    if(copyForm.getIsSigned())
        std::cout << name << " signed " << copyForm.getName() << std::endl;
    else
        std::cout << name << " couldn't sign " << copyForm.getName() << " because bureaucrat is not grade enough "<< std::endl;
}

void Bureaucrat::incrementGrade(){
    if(grade - 1 < 1)
        throw GradeTooHighException();
    else
        grade--;
}

void Bureaucrat::decrementGrade(){
    if(grade + 1 > 150)
        throw GradeTooLowException();
    else
        grade++;
}

int Bureaucrat::getGrade() const{
    return grade;
}

std::string Bureaucrat::getName() const{
    return name;
}

void Bureaucrat::executeForm(AForm const & form){
    try{
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e){
        std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}