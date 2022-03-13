//
// Created by dustinkgreco on 3/12/22.
//

#ifndef CCPPDC_DOG_H
#define CCPPDC_DOG_H

#include <string>

using namespace std;

class Dog
{
    public:
        Dog(string breed);
        string getBreed() const;
    private:
        string breed;
};

#endif //CCPPDC_DOG_H
