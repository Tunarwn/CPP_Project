#include "BitcoinExchange.hpp"
#include <stack>
#include <vector>

std::map<std::string, double> bitcoinVeri;

void inputData(const std::string& data1){
    std::ifstream data(data1);
    if(!data.is_open()){
        std::cerr << "Hata: Input dosyasi açilamiyor." << std::endl;
        exit(1);
    }
    std::string line;
    std::getline(data,line);
    while(std::getline(data,line)){
        std::istringstream ln(line);
        double dataValue = 0;
        std::string date;
        if(std::getline(ln, date, '|')){
            ln >> dataValue;
            // std::cout << "data : " << date << std::endl;
            // std::cout << "datavalue : " << dataValue << std::endl;
            // std::cout << "line : " << line << std::endl;
            if(dataValue < 0)
                std::cerr << "Error: not a positive number" << std::endl;
            else if(dataValue > 1000)
                std::cerr << "Error: too large a number"<< std::endl;
            else if(dataValue == 0 || std::count(line.begin(), line.end(), '|') != 1)
                std::cerr << "Error: bad input => " << date << std::endl;
            else{
                date.pop_back();
                std::map<std::string, double>::iterator it;
                std::map<std::string, double>::iterator it2;
                it2 = bitcoinVeri.begin();
                while(it2++ != bitcoinVeri.end()){
                    it = bitcoinVeri.find(date);
                    if(it != bitcoinVeri.end()){
                        std::cout << it->first << " => " << dataValue << " = "<< dataValue * it->second<<std::endl;
                        break;
                    }
                    else if(it2->first > date){
                        it2--;
                        std::cout << it2->first << " => " << dataValue << " = "<< dataValue * it2->second<<std::endl;
                        break;
                   }
                }
            }
        }
        // std::cout << "tarih " << date << "değer : " << myData[date] <<std::endl; 
    }
}



void VeritabaniniOku(const std::string& data) {
    std::ifstream dosya("data.csv");
    if (!dosya.is_open()) {
        std::cerr << "Hata: Veritabani dosyasi açilamiyor." << std::endl;
        exit(1);
    }

    std::string satir;
    std::getline(dosya, satir);
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
    inputData(data);
    dosya.close();
}
