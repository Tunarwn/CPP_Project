#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
private:
    std::string const name;
    int grade;

public:

    template <typename T>;

    T kare( type);
    Bureaucrat();
    Bureaucrat(std::string Aname);
    Bureaucrat(std::string Aname, int grade);
    Bureaucrat(const Bureaucrat &copyName);
    Bureaucrat &operator=(const Bureaucrat &copyName);
    ~Bureaucrat();


    int getGrade() { return (this->grade); }
    std::string getName(void) { return (this->name); }

    class GradeTooHighException : public std::exception{
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception{
    public:
        const char* what() const throw();
    };

    void CheckGradeRange(int grade);
    int template(int tuna);
    void incrementGrade();
    void decrementGrade();

};

std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif