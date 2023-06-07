#include <string>
#include <iostream>
#include <fstream>

std::string copyFile(const std::string& fileName,const std::string& s1, const std::string s2) {

    std::ifstream sourceFile(fileName);
    std::ofstream targetFile("copied_" + fileName);
    std::string line;

    while(std::getline(sourceFile, line))
    {
        size_t pos = 0;
        while((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
            targetFile << line << std::endl;
    }
    std::cout << "File Copied" << std::endl;
    return ("kopya_" + fileName);
}

int main(int ac, char **av) {
    if(ac != 4) {
        std::cout << "Parameter error" << std::endl;
        return 1;
    }
    std::string fileName = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::string copyName = copyFile(fileName, s1, s2);
    std::cout << "File copied and modified" << std::endl;

    return 0;
}
