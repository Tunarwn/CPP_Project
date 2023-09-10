#include "BitcoinExchange.hpp"

std::map<std::string, double> bitcoinVeri;

void VeritabaniniOku(const std::string& data) {
    std::ifstream dosya(data);
    if (!dosya.is_open()) {
        std::cerr << "Hata: Veritabani dosyasi açilamiyor." << std::endl;
        exit(1);
    }

    std::string satir;
    while(std::getline(dosya, satir))
    {
        std::istringstream st(satir);
        double BitcoinDeger;
        std::string tarih;

        if(std::getline(st, tarih, ',') && st >> BitcoinDeger){
            bitcoinVeri[tarih] = BitcoinDeger;
        }
        else
            std::cerr << "Hata : Geçersiz satir ->" << satir << std::endl; 
    }
    dosya.close();
}
