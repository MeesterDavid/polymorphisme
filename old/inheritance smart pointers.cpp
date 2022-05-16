// #include <iostream>
// #include <string>
// #include <vector>
// #include <memory>


// class IMove{
//     public:
//     virtual void move()=0;
// };

// class Animal{
//     private:
//     protected:
//     std::string name;
//     public:
//     virtual std::string printMyself() = 0;
// };

// class Duck:public Animal, public IMove {
//     //Blijkbaar moet je nog steeds expliciet aangeven dat de functie public is
//     public:
//     std::string printMyself(){
//         return "DUCK\n";
//     };
//     void move(){
//         std::cout << "I can fly, swim and walk\n";
//     }
// };

// class Dog: public Animal, public IMove {
//     public:
//     std::string printMyself(){
//         return "DOG\n";
//     }
//     void move(){
//         std::cout << "I can walk, run, prowl and jump\n";
//     }
// };

// class Zoo{
//     public:
//     //std::vector<Animal> animals <-- waarom kan dit niet?
//     //std::vector<Animal&> animals <-- waarom kan dit niet?
//     std::vector<std::unique_ptr<Animal>> animals;
//     void animalsDontHaveAVoice(){
//         for (std::unique_ptr<Animal>& animal : animals){
//             std::cout << animal->printMyself();
//         }
//     }
// };

// int main(){
//     Duck duck = Duck();
//     Dog dog = Dog();
//     std::cout << duck.printMyself();
//     std::cout << dog.printMyself();

//     std::cout << "pointers/references\n";

//     // Animal* ap = &duck;

//     // Animal** app = &ap;

//     std::unique_ptr<Animal> ap = std::make_unique<Duck>(duck);

//     //std::unique_ptr<std::unique_ptr<Animal>> app = std::make_unique<std::unique_ptr<Duck>>(ap);

//     // std::cout << "address of a pointer to duck: " << app << "\n";
//     std::cout << "a pointer to an Animal assigned to the reference (address) of duck: " << ap.get() << "\n";
//     std::cout << "duck speaking his mind by getting dereferenced: " << (*ap).printMyself() << "\n"; 
//     std::cout << "duck speaking his mind by getting dereferenced: " << ap->printMyself() << "\n"; 

//     Zoo zoo = Zoo();
//     std::unique_ptr<Duck> duckp = std::make_unique<Duck>(duck);
//     std::unique_ptr<Dog> dogp = std::make_unique<Dog>(dog);
//     zoo.animals.push_back(std::move(duckp));
//     zoo.animals.push_back(std::move(dogp));
//     zoo.animalsDontHaveAVoice();

//    //std::cout << zin << "\n";




//     return 0;
// }