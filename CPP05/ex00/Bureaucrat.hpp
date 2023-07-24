#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(std::string Aname);
    Bureaucrat(const Bureaucrat &copyName);
    Bureaucrat &operator=(const Bureaucrat &copyName);
    ~Bureaucrat();

    int getGrade() { return (this->grade); }
    std::string getName(void) { return (this->name); }

    class GradeToHighExeption : public std::exception
    {
    public:
        const char* what() const throw();
    };
};
#endif

// exception class larını araştır
// try - catch bloklarını arastır