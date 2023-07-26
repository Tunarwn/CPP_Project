#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm form("home");
        Bureaucrat bureaucrat("bureaucrat", 1);
        bureaucrat.signForm(form);
        bureaucrat.executeForm(form);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}