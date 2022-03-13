//
// Created by dustinkgreco on 3/12/22.
//

#include "Dog.h"
#include <stdexcept>

using namespace std;

Dog::Dog(string breed)
{
    if (breed == "Poodle" || breed == "poodle") {
        throw(runtime_error("This is a poodle free program."));
    } else {
        this->breed = breed;
    }
}

string Dog::getBreed() const
{
    return this->breed;
}