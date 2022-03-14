//
// Created by dustinkgreco on 3/13/22.
//

#include "DynamicDogs.h"

DynamicDogs::DynamicDogs(string name, string breed) {
    this->name = name;
    this->breed = breed;
}

string DynamicDogs::getName() const
{
    return name;
}

string DynamicDogs::getBreed() const
{
    return breed;
}