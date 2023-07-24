#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

// Renkli çıktı için ANSI kaçış kodları
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"


class Animal{

protected:
    std::string type;

public:
    Animal();
    Animal(std::string type);
    Animal(const Animal& copyType);
    Animal& operator=(const Animal& copyType);
    ~Animal();

    virtual void makeSound(void) const;
    std::string getType(void) const;
};

class Dog : public Animal{

public:
    Dog();
    Dog(const Dog& copyDog);
    Dog& operator=(const Dog& copyDog);
    ~Dog();

    void makeSound(void) const;

};

class Cat : public Animal{

public:
    Cat();
    Cat(const Cat& copyCat);
    Cat& operator=(const Cat& copyCat);
    ~Cat();

    void makeSound(void) const;

};

#endif
