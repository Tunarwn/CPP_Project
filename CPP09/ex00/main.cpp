#include "BitcoinExchange.hpp"



// int main(){

//     std::map<std::string, int> sifre;

//     sifre["Telefonsifresi"] = 12345;
//     sifre["Evsifresi"] = 9468;
//     sifre["EmreninTelefonSifresi"] = 322367;

//     std::cout << "Sifre : " << sifre["abcsifre"] << std::endl;
// }


int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Kullanım: " << argv[0] << " <input_dosyasi>" << std::endl;
        return 1;
    }

    std::string dosyaAdi = argv[1];
    VeritabaniniOku(dosyaAdi);

    std::string tarih;
    double miktar;

    while (true) {
        std::cout << "Tarih girin (YYYY-MM-DD) veya q ile çıkın: ";
        std::cin >> tarih;

        if (tarih == "q") {
            break;
        }

        if (bitcoinVeri.find(tarih) == bitcoinVeri.end()) {
            std::cout << "Hata: Veritabanında tarih bulunamadı, en yakın tarih kullanılacak." << std::endl;

            // En yakın tarihi bulma işlemi burada gerçekleştirin.

            std::cout << "Miktarı girin: ";
            std::cin >> miktar;

            // Hesaplama işlemi burada gerçekleştirin.

            std::cout << tarih << " => " << miktar << " = " << hesaplananDeger << std::endl;
        }
    }

    return 0;
}




