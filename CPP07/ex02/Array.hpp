#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array{
private:
    T* elements;
    size_t length;
 
public:
    Array() : length(0) {
        elements = new T;
    };

    Array(unsigned int n) : length(n){
        elements = new T[length];
    };

    Array(const Array& arrayCo py) : length(arrayCopy.length){
        elements = new T[length];
        for(size_t i = 0; i < length; i++)
            elements[i] = arrayCopy.elements[i];
    }

    Array& operator=(const Array& arrayCopy){
        if(this == &arrayCopy)
            return *this;
        delete[] elements;
        length = arrayCopy.length;
        elements = new T[length];
        for(size_t i = 0; i < length; i++)
            elements[i] = arrayCopy.elements[i];
        return *this;
    }

    ~Array(){
        delete[] elements;
    }

    T& operator[](size_t index) {
        if(index >= length)
            throw out_of_bounds();
        return  elements[index];
    }

    class out_of_bounds : public std::exception{
        const char* what() const throw(){
            return ("\n<<< index is out of bounds >>>\n");
        }
    };

    int size() const{
        return length;
    }
};

#endif
