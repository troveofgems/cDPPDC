//
// Created by dustinkgreco on 3/12/22.
//
#include "Person.h"
#include <stdexcept>

using namespace std;

Person::Person(string name)
{
    setName(name);
}

string Person::getName() const noexcept
{
    return this->name;
}

void Person::setName(string name)
{
    if (name != "Dustin") {
        this->name = name;
    }
    else
    {
        throw runtime_error("Dustin already exists within the system.");
    }
}