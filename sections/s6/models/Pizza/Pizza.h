//
// Created by dustinkgreco on 2/27/22.
//

#ifndef CCPPDC_PIZZA_H
#define CCPPDC_PIZZA_H

#include <string>
#include <vector>
using namespace std;

class Pizza {
    public:
        Pizza(string name, int cost, int diameter);

        // Accessors
        void addTopping(string choiceOfTopping);
        int getCost() const;

        // Printers
        void printToppings() const;
        void printReceipt() const;

    private:
        string name;
        int cost;
        int diameter;
        vector<string> toppings{"Cheese"};
};

#endif //CCPPDC_PIZZA_H
