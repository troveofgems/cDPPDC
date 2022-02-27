//
// Created by dustinkgreco on 2/26/22.
//
#ifndef CCPPDC_HOUSE_H
#define CCPPDC_HOUSE_H
#include <string>
using namespace std;
/* *
* Classes
* ---------
* * * * * */
class House {
public:
    // Constructor
    House();
    House(int numStories, int numWindows, string color);

    // Destructor
    ~House();

    // Setters (Mutators)
    void setNumStories(int numStories);
    void setNumWindows(int numWindows);
    void setColor(string color);

    // Getters (Accessors)
    int getNumStories() const;
    int getNumWindows() const;
    string getColor() const;

    // Printers
    void printHouseData() const;

private:
    int numStories;
    int numWindows;
    string color;
};
#endif //CCPPDC_HOUSE_H
