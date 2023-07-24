#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("emre");
    Bureaucrat b("anut");

    std::cout << a.getName() << std::endl;
    std::cout << b.getName() << std::endl;

    b = a;

    std::cout << a.getName() << std::endl;
    std::cout << b.getName() << std::endl;
    a()
}