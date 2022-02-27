//
// Created by dustinkgreco on 2/27/22.
//
#include <iostream>
#include "Pizza.h"

using namespace std;

Pizza::Pizza(string name, int cost, int diameter)
{
    this->name = name;
    this->cost = cost;
    this->diameter = diameter;
}

void Pizza::addTopping(string choiceOfTopping)
{
    this->toppings.push_back(choiceOfTopping);
}

int Pizza::getCost() const
{
    const int numberOfToppings =  this->toppings.size();
    const int costModifier = numberOfToppings > 1 ? ((numberOfToppings - 1) * 2) : 0;
    return (this->cost + costModifier);
}

void Pizza::printToppings() const
{
    for(auto n: this->toppings) {
        cout << "\t\t->" << n << endl;
    }
}

void Pizza::printReceipt() const
{
    cout << "Receipt For Pizza Order" << endl;
    cout << "=======================" << endl;
    cout << "Pizza: " << this->name << endl;
    cout << "Pizza Diameter: " << this->diameter << " inches" << endl;
    cout << "Topping Count: " << this->toppings.size() << endl;
    cout << "\tList: " << endl;
    this->printToppings();
    cout << "Total Cost: $" << this->getCost() << endl;
}