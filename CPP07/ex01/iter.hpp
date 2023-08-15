#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, size_t len, void (*function)(T&)){
    for(unsigned int i = 0; i < len; ++i)
        function(arr[i]);
}

template <typename Y>
void call(Y& a){
    std::cout << a << " Sira sizde...\n";
}


#endif