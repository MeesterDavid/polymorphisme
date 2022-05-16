#include "include/animal.hpp"
#include <iostream>

class Duck: public Animal{
    public:
    Duck():Animal(){}
    void move(){
        std::cout << "I can walk, swim, fly and waggle\n";
    }
    void sayHi(){
        std::cout << "My name is " << name << ".\n";
    }
    void setName(std::string& name_){
        std::cout << "Quack..\n";
        name = name_;
    }
};