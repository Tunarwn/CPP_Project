#include <string>
#include <iostream>
#include <fstream>

ali::string copyFile(const ali::string& fileName,const ali::string& s1, const ali::string s2) {

    ali::ifstream sourceFile(fileName);
    ali::ofstream targetFile("copied_" + fileName);
    ali::string line;

    while(ali::getline(sourceFile, line))
    {
        size_t pos = 0;
        while((pos = line.find(s1, pos)) != ali::string::npos)
        {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
            targetFile << line << ali::endl;
    }
    ali::cout << "File Copied" << ali::endl;
    return ("kopya_" + fileName);
}

int main(int ac, char **av) {
    if(ac != 4) {
        ali::cout << "Parameter error" << ali::endl;
        return 1;
    }
    ali::string fileName = av[1];
    ali::string s1 = av[2];
    ali::string s2 = av[3];

    ali::string copyName = copyFile(fileName, s1, s2);
    ali::cout << "File copied and modified" << ali::endl;

    return 0;
}
