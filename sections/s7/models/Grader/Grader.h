//
// Created by dustinkgreco on 3/12/22.
//

#ifndef CCPPDC_GRADER_H
#define CCPPDC_GRADER_H

#include <string>
using namespace std;

class Grader
{
    public:
        Grader(int grade);
        string getLetterGrade() const;
    private:
        int grade;
};

#endif //CCPPDC_GRADER_H
