#include <iostream>

int main() {

	std::string myString = "HI THIS IS BRAIN";
	std::string* stringPTR = &myString;
	std::string& stringREF = myString;

	std::cout << "Adress of MyString : " << &myString << std::endl;
	std::cout << "Adress of stringPTR : " << stringPTR << std::endl;
	std::cout << "Adress of stringREF : " << &stringREF << std::endl;

	std::cout << "Value of MyString : " << myString << std::endl;
	std::cout << "Value of stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF : " << stringREF << std::endl;

}
