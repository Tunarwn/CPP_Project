#include "RPN.hpp"

int main(int ac, char **av){

    if(ac != 2){
        std::cerr << "Error: bad arguments\n";
        return 0;
    }
    else if(!isValid(av)){
        std::cerr << "Error\n";
        return 0;
    }
    int res = doCalculate(av);
    std::cout << res << std::endl;
    return (0);
}