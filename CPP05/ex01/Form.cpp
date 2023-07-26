#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Anonim"), gradeToSign(1), gradeToExecute(31) {
    //std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExecute) : name(name), gradeToSign(gradeSign), gradeToExecute(gradeExecute){
    //std::cout << "Name constructor called" << std::endl;
}

Form::Form(const Form& copyForm) : name(copyForm.name), gradeToSign(copyForm.gradeToSign), gradeToExecute(copyForm. gradeToExecute), isSigned(copyForm.isSigned){
    //std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& copyForm) {
    *const_cast<std::string*>(&name) = copyForm.name;
    *const_cast<int*>(&gradeToSign) = copyForm.gradeToSign;
    *const_cast<int*>(&gradeToExecute) = copyForm. gradeToExecute;
    isSigned = getGradeToSign();

    return *this;
}

Form::~Form() {
    std::cout << "Default destructor called" << std::endl;
}

std::string Form::getName() const{
    return name;
}
int Form::getGradeToSign() const{
    return gradeToSign;
}

int Form::getGradeToExecute() const{
    return gradeToExecute;
}

bool Form::getIsSigned() const{
    return isSigned;
}

void Form::beSigned(const Bureaucrat& copyBurea){
    if(copyBurea.getGrade() < gradeToSign)
        isSigned = true;
    else
        throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& o, const Form& copyForm){
    o << "name: " << copyForm.getName() << std::endl;
    o << "grade to sign: " << copyForm.getGradeToSign() << std::endl;
    o << "grade to execute: " << copyForm.getGradeToExecute() << std::endl;
    o << "sign: " <<std::boolalpha << copyForm.getIsSigned() << std::endl;
    return o;
}

const char* Form::GradeTooHighException::what() const throw(){
    return ("\n <<< Form's grade cant't be higher than '1' >>> \n");
}

const char* Form::GradeTooLowException::what() const throw(){
    return ("\n <<< Form's grade can't be lower than '150' >>> \n");
}

const char* Form::NotEnoughSign::what() const throw(){
    return ("\n <<< Bureaucrat's grade is not enought to sign this form! >>> \n");
}
