#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm() : name("Anonim"), gradeToSign(1), gradeToExecute(31) {
    //std::cout << "Default constructor called" << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExecute) : name(name), gradeToSign(gradeSign), gradeToExecute(gradeExecute){
    //std::cout << "Name constructor called" << std::endl;
    if(gradeSign < 1 || gradeExecute < 1)
        throw GradeTooHighException();
    else if(gradeSign > 150 || gradeExecute > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm& copyAForm) : name(copyAForm.name), gradeToSign(copyAForm.gradeToSign), gradeToExecute(copyAForm. gradeToExecute), isSigned(copyAForm.isSigned){
    //std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& copyAForm) {
    *const_cast<std::string*>(&name) = copyAForm.name;
    *const_cast<int*>(&gradeToSign) = copyAForm.gradeToSign;
    *const_cast<int*>(&gradeToExecute) = copyAForm. gradeToExecute;
    isSigned = getGradeToSign();

    return *this;
}

AForm::~AForm() {
    // std::cout << "Default destructor called" << std::endl;
}

std::string AForm::getName() const{
    return name;
}
int AForm::getGradeToSign() const{
    return gradeToSign;
}

int AForm::getGradeToExecute() const{
    return gradeToExecute;
}

bool AForm::getIsSigned() const{
    return isSigned;
}

void AForm::beSigned(const Bureaucrat& copyBurea){
    if(copyBurea.getGrade() < gradeToSign)
        isSigned = true;
    else
        throw NotEnoughSign();
}

std::ostream& operator<<(std::ostream& o, const AForm& copyAForm){
    o << "name: " << copyAForm.getName() << std::endl;
    o << "grade to sign: " << copyAForm.getGradeToSign() << std::endl;
    o << "grade to execute: " << copyAForm.getGradeToExecute() << std::endl;
    o << "sign: " <<std::boolalpha << copyAForm.getIsSigned() << std::endl;
    return o;
}

const char* AForm::GradeTooHighException::what() const throw(){
    return ("\n <<< AForm's grade cant't be higher than '1' >>> \n");
}

const char* AForm::GradeTooLowException::what() const throw(){
    return ("\n <<< AForm's grade can't be lower than '150' >>> \n");
}

const char* AForm::NotEnoughSign::what() const throw(){
    return ("\n <<< Bureaucrat's grade is not enought to sign this form! >>> \n");
}

const char* AForm::NotEnoughExecute::what() const throw(){
    return ("\n <<< Bureaucrat's grade is not enought to execute this form! >>> \n");
}