#include "BitcoinExchange.hpp"


int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    std::string dosyaAdi = argv[1];
    VeritabaniniOku(dosyaAdi);
    


    return 0;
}




