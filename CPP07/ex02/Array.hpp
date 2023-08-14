#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array{
private:
    T& elements;
    size_t arraySize;

public:
    Array() : elements(nullptr), arraySize(0){};

    Array(unsigned int n) arraySize(n){
        elements = new T[n];
    };

    Array(const Array<T>& other) : arraySize(other.arraySize){
        elements = new T[arraySize];
        for(unsigned int i = 0; i < arraySize; ++i)
        elements[i] = other.elements[i];
    };

    Array<T>& operator=(const Array<T>& other) {
        if(this != &other){
            delete[] elements;
            arraySize = other.arraySize;
            elements = new T[arraySize];
            for(unsigned int i = 0; i < arraySize; ++i)
                elements[i] = other.elements[i];
        }
        return *this;
    };

    ~Array(){
        delete[] elements;
    }

    Array<T>& operator[](unsigned int index){
        if(index >= arraySize){
            throw std::out_of_range("index out of bounds");
        }
        return elements[index];
    }

    unsigned int size() const {
        return arraySize;
    }
};

#endif