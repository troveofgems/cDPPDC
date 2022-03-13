//
// Created by dustinkgreco on 3/12/22.
//

#ifndef CCPPDC_PERSON_H
#define CCPPDC_PERSON_H

#include <string>

using namespace std;

class Person
{
    public:
        Person(string name);
        string getName() const noexcept;
        void setName(string name);
    private:
        string name;
};


#endif //CCPPDC_PERSON_H
