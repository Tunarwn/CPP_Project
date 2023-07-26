#include "Bureaucrat.hpp"

int main()
{
    // Bureaucrat a("emre");
    // Bureaucrat b("anut");

    // std::cout << a.getName() << std::endl;
    // std::cout << b.getName() << std::endl;

    // b = a;

    // std::cout << a.getName() << std::endl;
    // std::cout << b.getName() << std::endl;
    try {
        Bureaucrat bureaucrat("Tuna", 100);
        bureaucrat.incrementGrade();
        std::cout << "New grade: " << bureaucrat.getGrade() << std::endl;
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cerr << "Grade too high exception: " << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cerr << "Grade too low exception: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Unknown exception occurred: " << e.what() << std::endl;
    }

    return 0;
}