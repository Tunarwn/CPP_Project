#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat(std::string Aname, int _grade);
    Bureaucrat(const Bureaucrat &copyName);
    Bureaucrat &operator=(const Bureaucrat &copyName);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    class GradeTooHighException : public std::exception{
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception{
    public:
        const char* what() const throw();
    };

    void CheckGradeRange(int grade);

    void incrementGrade();
    void decrementGrade();
    void signForm(const Form& copyForm);

};
    
std::ostream& operator<<(std::ostream& os, Bureaucrat& bureaucrat);

#endif