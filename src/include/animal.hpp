#pragma once
#include <string>
#include "IMove.hpp"
#include "enums.hpp"

class Animal: public IMove{
    protected:
    std::string name;
    Emotion emotion;

    public:
    Animal():
        name("john"),
        emotion(happy)
        {}
    virtual void sayHi() = 0;

};