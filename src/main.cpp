#include "zoo.cpp"


int main(){
    Dog dog = Dog();
    Duck duck = Duck();

    Zoo zoo = Zoo();


    Animal* addressOfMyDog = &dog;
    Animal* addressOfMyDuck = &duck;

    zoo.animals.push_back(&dog);
    zoo.animals.push_back(addressOfMyDuck);

    zoo.massGreeting();
    zoo.showYourSkills();

    std::vector<Duck&> waggleOfDucks;
    waggleOfDucks.push_back(duck);


    return 0;
}