//
// Created by dustinkgreco on 3/13/22.
//

#ifndef CCPPDC_DYNAMICDOGS_H
#define CCPPDC_DYNAMICDOGS_H

#include <iostream>
#include <string>

using namespace std;

class DynamicDogs {
    public:
        DynamicDogs(string name, string breed);
        string getName() const;
        string getBreed() const;


    private:
        string name;
        string breed;
};

#endif //CCPPDC_DYNAMICDOGS_H
