#include "iter.hpp"

int main() {
    int numbers[4] = {1, 2, 3, 4};
    std::string str[4] = {"Tunas", "Emres", "Res", "Bi"};

    // Fonksiyon şablonunu çağırma
    ::iter(numbers, 4, call); // İnt dizisi üzerine işlem yapacak
    std::cout << std::endl;

    ::iter(str, 4, call); // String dizisi üzerine işlem yapacak

    return 0;
}