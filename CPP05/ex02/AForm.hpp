#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class AForm {
private:
    const std::string name;
    const int gradeToSign;
    const int gradeToExecute;
    bool isSigned;

public:
    AForm();
    AForm(std::string name, int gradeSign, int gradeExecute);
    AForm(const AForm& copyForm);
    AForm& operator=(const AForm& copyForm);
    virtual ~AForm();

    std::string getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool getIsSigned() const;
    void beSigned(const Bureaucrat& copyBurea);
    virtual void execute(Bureaucrat const & executor) const = 0;

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
class NotEnoughExecute : public std::exception {
public:
    const char *what() const throw();
};


};
std::ostream& operator<<(std::ostream& o, const AForm& copyForm);

#endif