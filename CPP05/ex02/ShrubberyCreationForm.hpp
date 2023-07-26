#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
private:
    std::string name;
public:
    ShrubberyCreationForm(std::string _name);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
    ~ShrubberyCreationForm();

    void execute(Bureaucrat const & executor) const;
    class FileCreationException : public std::exception {
        const char *what() const throw();
    };
};


#endif