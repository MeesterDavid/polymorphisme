#include "include/animal.hpp"
#include <iostream>

class Dog: public Animal{
    public:
    Dog():Animal(){}
    void move(){
        std::cout << "I can walk, run, jump and prowl\n";
    }
    void sayHi(){
        std::cout << "My name is " << name << ".\n";
    }
    void setName(std::string& name_){
        std::cout << "Woof!\n";
        name = name_;
    }
};