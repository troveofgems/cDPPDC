//
// Created by dustinkgreco on 2/26/22.
//
#include <iostream>
#include "House.h"
#include <string>
using namespace std;

House::House()
{
    this->numStories = 1;
    this->numWindows = 4;
    this->color = "monochromatic";
}

House::House(int numStories, int numWindows, string color)
{
    this->numStories = numStories;
    this->numWindows = numWindows;
    this->color = color;
}

House::~House()
{
    cout << "The " << color << " house with " << numStories << " stories and " << numWindows << " windows has been " <<
     "scheduled for demolition!" << endl;
}

void House::setNumStories(int numStories)
{
    this->numStories = numStories;
}

void House::setNumWindows(int numWindows)
{
    this->numWindows = numWindows;
}

void House::setColor(string color)
{
    this->color = color;
}

// Getters (Accessors)
int House::getNumStories() const
{
    return numStories;
}

int House::getNumWindows() const
{
    return numWindows;
}

string House::getColor() const
{
    return color;
}

// Printers
void House::printHouseData() const
{
    cout << endl << endl;
    cout << "Printing House Data" << endl;
    cout << "This house contains the following features:" << endl;
    cout << "\t1. # of Stories: " << this->numStories << endl;
    cout << "\t2. # of Windows: " << this->numWindows << endl;
    cout << "\t3. House Color: " << this->color << endl;
}