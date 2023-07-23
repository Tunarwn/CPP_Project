#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
    private:
        std::string const name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string Aname);
        Bureaucrat(const Bureaucrat& copyName);
        Bureaucrat& operator=(const Bureaucrat& copyName);
        ~Bureaucrat();

        int getGrade();
        int GradeTooHighException();
        int GradeTooLowException();
        std::string getName(void);
};

#endif