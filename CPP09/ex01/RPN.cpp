#include "RPN.hpp"

bool isValid(char *av[]){
    std::string str = static_cast<std::string>(av[1]);
    unsigned int i = 0;
    while(i < str.length())
    {
        char c = str[i];
        if(c != '+' && c != '-' && c != '*' && c != '/' && c != ' ' && !isdigit(c))
            return false;
        i++;
    }
    return true;
}

int doCalculate(char *av[]){
    std::string s = static_cast<std::string>(av[1]);
    std::stack<int> myStack;
    int result;
    // std::cout << s << std::endl;
    for(size_t i = 0; i < s.size(); i++){
        char c = s[i];
        if(isdigit(c)){
            std::cout << "the number : " << c - '0' << " has been pushed" << std::endl;
            myStack.push(c - '0');
        }
        else if(c == '+' || c == '-' || c == '*' || c == '/')
        {
            result = 0;
            int numberOne = myStack.top();
            myStack.pop();
            int numberTwo = myStack.top();
            myStack.pop();
            std::cout << "our first number is : " << numberOne << std::endl;
            std::cout << "our second number is : " << numberTwo << std::endl;
            switch (c)
            {
            case '+':
                result += numberOne + numberTwo;
                break;
            case '-':
                result += numberTwo - numberOne;
                break;
            case '/':
                result += numberOne / numberTwo;
                break;
            case '*':
                result += numberOne * numberTwo;
                break;
            }
            myStack.push(result);
        }
    }
    return result;
}