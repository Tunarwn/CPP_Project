#ifndef4 ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
    private:
        std::string name;
    public:
        RobotomyRequestForm(std::string _name);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
        ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const;
};

#endif