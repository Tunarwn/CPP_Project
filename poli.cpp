#include <iostream>

class cat{
    public:
        virtual void ses(){
            std::cout << "miyav" << std:: endl;
        }
}; 

class dog : public cat{
    public:
        void ses(){
            std::cout << "havhav" << std::endl;
        }
};


int main(){
    cat c;
    dog d;

    c.ses();
    d.ses();

    cat* dizi[2];
    dizi[0] = &c;
    dizi[1] = &d;
    std::cout << std::endl;
    dizi[0]->ses();
    dizi[1]->ses();
}