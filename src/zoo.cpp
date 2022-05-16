#include <vector>

#include "dog.cpp"
#include "duck.cpp"

class Zoo{
    public:
    std::vector<Animal*> animals;
    void massGreeting(){
        for (Animal* animal : animals){
            animal->sayHi();
        }
    }
    // Polymorphism with an interface and hierarch
    void showYourSkills(){
        for (Animal* animal : animals){
            animal->move();
        }
    }
};