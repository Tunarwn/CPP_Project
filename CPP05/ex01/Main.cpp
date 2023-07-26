#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try{
        Bureaucrat buro("tuna", 152);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    try{
        Form formy("formo", 22, 165);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    return 0;
}