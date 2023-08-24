#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form {
private:
    const std::string name;
    const int gradeToSign;
    const int gradeToExecute;
    bool isSigned;

public:
    Form();
    Form(std::string name, int gradeSign, int gradeExecute);
    Form(const Form& copyForm);
    Form& operator=(const Form& copyForm);
    ~Form();

    std::string getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool getIsSigned() const;
    void beSigned(const Bureaucrat& copyBurea);


class GradeTooHighException : public std::exception {
public:
    const char *what() const throw();
};

class GradeTooLowException : public std::exception {
public:
    const char *what() const throw();
};

class NotEnoughSign : public std::exception {
public:
    const char *what() const throw();
};


};
std::ostream& operator<<(std::ostream& o, const Form& copyForm);

#endif